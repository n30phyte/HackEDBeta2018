#!/usr/bin/python
import os
import numpy as np
import zmq

def getGameState():
    context = zmq.Context()
    socket = context.socket(zmq.SUB)

    socket.connect("tcp://localhost:5555")

    socket.setsockopt_string(zmq.SUBSCRIBE, "gamestate")

    # print("Subscribing")
    #  Wait for next request from client
    while True:
        message = socket.recv_string()
        if message != None:
            break

    [ballX, ballY, paddle0X, paddle0Y, paddle1X, paddle1Y] = message.split()[1:]

    matrix = np.zeros(80);
    matrix.itemset((ballX, ballY), 1)
    matrix.itemset((ballX+1, ballY), 1)

    for i in range(-3, 4):
        matrix.itemset((paddle0X, paddle0Y+i), 1)
        matrix.itemset((paddle0X+1, paddle0Y+i), 1)
        matrix.itemset((paddle1X, paddle1Y+i), 1)
        matrix.itemset((paddle1X+1, paddle1Y+i), 1)

    # intermediate = []
    # result = []
    # count = 0
    #
    # for i in line:
    #     if i != str(0):
    #         intermediate.append(1)
    #     else:
    #         intermediate.append(0)
    #     count += 1
    #     if count == 80:
    #         result.append(intermediate)
    #         intermediate = []
    #         count = 0

    # print(result)
    # result = np.array(result, np.int)
    return matrix.astype(np.float).ravel()

def sendGameInput(action):
    # if action == 2:
    #     # up
    #
    # elif action == 5:
    #     # down
    pass
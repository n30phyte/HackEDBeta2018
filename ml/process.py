import numpy as np
import zmq


def getGameState():
    context = zmq.Context()
    socket = context.socket(zmq.SUB)

    socket.connect("tcp://localhost:5555")

    socket.setsockopt_string(zmq.SUBSCRIBE, "gamestate")

    while True:
        message = socket.recv_string()
        if message != None:
            print("Got game state")
            break

    [ballX, ballY, paddle0X, paddle0Y, paddle1X, paddle1Y] = message.split()[1:]

    ballX = int(ballX)
    ballY = int(ballY)
    paddle0X = int(paddle0X)
    paddle0Y = int(paddle0Y)
    paddle1X = int(paddle1X)
    paddle1Y = int(paddle1Y)

    matrix = np.zeros((80, 80))

    matrix.itemset((ballX, ballY), 1)
    matrix.itemset((ballX + 1, ballY), 1)

    for i in range(-3, 4):
        matrix.itemset((paddle0X, paddle0Y + i), 1)
        matrix.itemset((paddle0X + 1, paddle0Y + i), 1)
        matrix.itemset((paddle1X, paddle1Y + i), 1)
        matrix.itemset((paddle1X + 1, paddle1Y + i), 1)

    return matrix.astype(np.float).ravel()


def sendGameInput(action):
    print("Send input")
    print(action)
    context2 = zmq.Context()
    socket2 = context2.socket(zmq.PUB)
    socket2.bind("tcp://*:5556")

    if action == 2:
        print("Sending up")
        socket2.send_string("gameinput UP\0")

    elif action == 5:
        print("Sending down")
        socket2.send_string("gameinput DOWN\0")

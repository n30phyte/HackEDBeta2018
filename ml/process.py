#!/usr/bin/python
import os
import numpy as np

def getGameState():
    intermediate = []
    result = []
    count = 0
    pipein = os.open("/tmp/myFIFO", "r")
    line = pipein.readline();
    count = 0
    for i in line:
        if i != str(0):
            intermediate.append(1)
        else:
            intermediate.append(0)
        count += 1
        if count == 80:
        result.append(intermediate)
        intermediate = []
        count = 0
    result = np.array(result, np.int)
    return result.astype(np.float).ravel()

def sendGameInput(action):
    if action == 2:
        #up
    elif action == 5:
        #down

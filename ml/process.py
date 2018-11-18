#!/usr/bin/python
import os
import numpy as np

def getGameState():
    intermediate = []
    pipein = os.open("/tmp/myFIFO", "r")
    line = pipein.readline();
    count = 0
    m = 0
    for i in line:
        if count < 80:
            if i != 0:
                intermediate[m].append(1)
                count+=1
            else:
                intermediate[m].append(0)
                count+=1
        else:
            m+=1
            count = 0
    result = np.array(intermediate, np.int)
    return result.astype(np.float).ravel()

def sendGameInput(action):
    if action == 2:
        #up
    elif action == 5:
        #down

import zmq

context2 = zmq.Context()
socket2 = context2.socket(zmq.PUB)
socket2.bind("tcp://*:5566")

while (True):
    print("Senidn")
    socket2.send_string("gameinput UP\0")

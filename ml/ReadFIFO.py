import zmq

context = zmq.Context()
socket = context.socket(zmq.SUB)

socket.connect("tcp://localhost:5555")

socket.setsockopt_string(zmq.SUBSCRIBE, "gamestate")

print("Subscribing")
while True:
    #  Wait for next request from client
    message = socket.recv_string()
    print(message)
# HackED Beta 2018

## Group Members
Michael, Armi, Cynthia, Caleb

## AI Pong
For our project we decided to make an implementation of Pong that lets you play
against an AI player. To build Pong we used C++ and the SFML library. To make
the AI player we knew we wanted to use Python and reinforcement learning
techniques. After doing some research we found Andrej Karpathy's blog post [^1] on
using policy gradients to solve the pong game found in the OpenAI Gym
environment. To allow us to use GPU acceleration we found a port of Andrej's
technique in Keras [^2], a high level wrapper around Tensorflow. To train the
AI player we set up a Google Cloud Compute Engine with a single Tesla K80 GPU.
Additionally to allow the training done on the OpenAI Gym environment to
transfer to the C++ implementation of Pong we had to reverse engineer the
Gym inputs/outputs and build some processing scripts in Python to interface
with the model.

## Acknowledgements
[^1]http://karpathy.github.io/2016/05/31/rl/
[^2]https://github.com/mkturkcan/Keras-Pong/blob/master/keras_pong.py

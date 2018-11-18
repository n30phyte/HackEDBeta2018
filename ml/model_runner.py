import gym
import numpy as np
from time import sleep
from keras import backend as K
from keras.models import Sequential
from keras.callbacks import ModelCheckpoint
from keras.layers import Input, Dense, Reshape
from keras.layers.wrappers import TimeDistributed
from keras.optimizers import Adam, Adamax, RMSprop
from keras.layers.advanced_activations import PReLU
from keras.layers.normalization import BatchNormalization
from keras.layers.core import Activation, Dropout, Flatten
from keras.layers.convolutional import UpSampling2D, Convolution2D
import process

input_dim = 80 * 80
number_of_inputs = 6
learning_rate = 0.001

def make_shitty():
    model = Sequential()
    model.add(Reshape((1,80,80), input_shape=(input_dim,)))
    model.add(Convolution2D(32, 9, 9, subsample=(4, 4), border_mode='same', activation='relu', init='he_uniform'))
    model.add(Flatten())
    model.add(Dense(16, activation='relu', init='he_uniform'))
    model.add(Dense(number_of_inputs, activation='softmax'))
    opt = Adam(learning_rate)
    model.compile(loss='categorical_crossentropy', optimizer=opt)
    return model

def make_good():
    model = Sequential()
    model.add(Reshape((1, 80, 80), input_shape=(input_dim,)))
    model.add(Convolution2D(32, 6, 6, subsample=(3, 3), border_mode='same',
                            activation='relu', init='he_uniform'))
    model.add(Flatten())
    model.add(Dense(64, activation='relu', init='he_uniform'))
    model.add(Dense(32, activation='relu', init='he_uniform'))
    model.add(Dense(number_of_inputs, activation='softmax'))
    opt = Adam(lr=learning_rate)
    # See note regarding crossentropy in cartpole_reinforce.py
    model.compile(loss='categorical_crossentropy', optimizer=opt)
    return model

def pong_preprocess_screen(I):
    I = I[35:195]
    I = I[::2,::2,0]
    I[I == 144] = 0
    I[I == 109] = 0
    I[I != 0] = 1
    return I.astype(np.float).ravel()


model = make_good()
model.load_weights('pong_reinforce.h5')

prev_x = None

env = gym.make("Pong-v0")
observation = env.reset()

if __name__ =="__main__":
    while(True):
        
        cur_x = pong_preprocess_screen(observation);
        x = cur_x - prev_x if prev_x is not None else np.zeros(input_dim)
        prev_x = cur_x
        aprob = ((model.predict(x.reshape([1,x.shape[0]]), batch_size=1).flatten()))
        aprob = aprob/np.sum(aprob)
        action = np.random.choice(number_of_inputs, 1, p=aprob)[0]
        
        observation, reward, done, info = env.step(action)

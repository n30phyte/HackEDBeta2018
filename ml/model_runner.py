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
import ml.process as process

input_dim = 80 * 80
number_of_inputs = 6

model = Sequential()
model.add(Reshape((1,80,80), input_shape=(input_dim,)))
model.add(Convolution2D(32, 9, 9, subsample=(4, 4), border_mode='same', activation='relu', init='he_uniform'))
model.add(Flatten())
model.add(Dense(16, activation='relu', init='he_uniform'))
model.add(Dense(number_of_inputs, activation='softmax'))
model.compile(loss='categorical_crossentropy', optimizer=opt)

model.load_weights('pong_model_checkpoint.h5')

prev_x = None

if __name__ =="__main__":
    while(True):
        gameState = process.getGameState()
        
        cur_x = gameState
        x = cur_x - prev_x if prev_x is not None else np.zeros(input_dim)
        prev_x = cur_x
        aprob = ((model.predict(x.reshape([1,x.shape[0]]), batch_size=1).flatten()))
        aprob = aprob/np.sum(aprob)
        action = np.random.choice(number_of_inputs, 1, p=aprob)[0]

        process.sendGameInput(action)

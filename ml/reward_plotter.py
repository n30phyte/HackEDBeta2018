import pickle
import matplotlib.pyplot as plt
import numpy as np

with open('reward.out', 'rb') as fobj:
    rewards = pickle.load(fobj)
x = np.arange(0, len(rewards[0]))

plt.plot(x, rewards[0], 'b-', x, rewards[1], 'r-')
plt.axis([0, len(rewards[0]), -21, 21])
plt.show()
import matplotlib.pyplot as plt
import numpy as np

with open('game_rewards.txt', 'r') as f1obj:
    inter = f1obj.readlines()
    game_rewards = [float(i.rstrip()) for i in inter]

with open('mean_rewards.txt', 'r') as f2obj:
    inter2 = f2obj.readlines()
    mean_rewards = [float(j.rstrip()) for j in inter2]

print(game_rewards)
print(mean_rewards)

x = np.arange(0, len(game_rewards))

plt.plot(x, game_rewards, 'b-', x, mean_rewards, 'r-')
plt.axis([0, len(game_rewards), -21, 21])
plt.show()
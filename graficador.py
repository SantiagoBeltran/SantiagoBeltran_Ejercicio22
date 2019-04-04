import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ MCMC.cpp -o MCMC.x")
a = os.system("./MCMC.x > MCMC.dat")

plt.figure()
data = np.loadtxt("MCMC.dat")
plt.hist(data, bins=15)
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("gauss.png")

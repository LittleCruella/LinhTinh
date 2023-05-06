from turtle import color
import numpy as np
import matplotlib.pyplot as plt
import random




#Question1: 
matrix = np.array([1,3])
for i in range(100):
    a = random.uniform(-4,4)
    plt.scatter(a*matrix[0],a*matrix[1] , color = "green")

plt.show()

#Question2:
matrix1 = np.array([3,5,1])
matrix2 = np.array([0,2,2])
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
for i in range(100):
    a = random.uniform(-4,4)
    ax.plot(a*matrix1[0], a*matrix1[1], a*matrix1[2])

plt.show()



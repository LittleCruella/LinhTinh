import numpy as np


#Question 1:
a = [1, 2, -3]
b = np.array([[4,5,1], [-4, 0, 4], [1, 3, 2]])
result = np.zeros(3)

for i in range(0, 3):
    result += a[i] * b[i]

print(result)



#Question 2:
a = np.array([1, 2, -3])
b = np.array([[4,5,1], [-4, 0, 4], [1, 3, 2]])

print(a@b)

#Question 3:

#Question 4:

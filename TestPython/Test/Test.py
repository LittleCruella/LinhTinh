import math
import os
from pickle import EMPTY_LIST
import random
import re
import sys
from copy import *

from array import *
import numpy as np





def sort_arr(arr):
    temp = deepcopy(arr)
    sortarr = temp.sort()

    if arr == sortarr:
        print("YES")
        return

    l = r = -1

    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            l = i

    for i in range(n - 1, 0, -1):
        if arr[i] < arr[i - 1]:
            r = i



    temp[l] = temp[r], temp[r] = temp[l]
    if temp == sortarr:
        print("YES")
        print("SWAP", l + 1, r + 1)

    temp = deepcopy(arr)
    temp = temp[:l] + temp[l:r+1][::-1] + temp[r+1:]


    if temp == sortarr:
        print("YES")
        print("REVERSE", l + 1, r + 1)

    else:
        print("NO")
def Grid_Challenge(grid):
    grid = [list(row) for row in grid]

    r = len(grid)
    c = len(grid[0])

    for i in range(r):
        grid[i].sort()

    for i in range (c):
        for j in range(r):
            if not grid[j - 1][i] <= grid[j][i]:
                return "NO"
                


    return "YES"
def candies(arr, n):
    dp = [1] * n

    for i in range(1, n):
        if arr[i] > arr[i - 1]:
            dp[i] = dp[i - 1] + 1


    for i in range(n - 2, 0, -1):
        if arr[i] > arr[i + 1]:
            dp[i] = dp[i + 1] + 1


    return sum(dp)
def max_min(arr, n, k):
    
    
    arr.sort()
    min = arr[k - 1] - arr[0]
    for i in range(k - 1, n):
        if arr[i] - arr[i - k + 1] < min:
            min = arr[i] - arr[i - k + 1]


    return min
def cloud(x, popu, town, y, loc, r):
    result = []
    if y == 1:
        return sum(popu)
    else:
        for i in range (0, y):
            temp1 = deepcopy(loc)
            temp2 = deepcopy(r)
            temp3 = deepcopy(popu)
            temp1.pop(i)
            temp2.pop(i)
            for j in range (0, x):
                for k in range (0, y - 1):
                    if temp1[k] + temp2[k] >= town[j] >= temp1[k] - temp2[k]:
                        temp3.remove(popu[j])
            result.append(sum(temp3))

        return max(result)
def gaming_array(arr):
    i = 0
    while( len(arr) > 0 ):
        maxi = max(arr)
        index = arr.index(maxi)
        if index == 0: 
            arr.clear()
            i += 1
        else:
            arr = arr[0: index - 1]
            i += 1 


     
    if i % 2 != 0:
        print("BOB")
    else:
        print("ANDY")
def new_year_chaos(arr):
    bribe = 0
    for i in range (len(arr) - 1, 0, -1):
        if arr[i] != i + 1:
            if arr[i - 1] == i + 1:
                bribe += 1
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
            elif arr[i - 2] == i + 1:
                bribe += 2
                arr[i], arr[i - 1], arr[i - 2] = arr[i - 2], arr[i], arr[i - 1]
            else:
                return "Too chaotic"
                
    return bribe



stack = [[1,2], [3,4], [5,6], [7,8], [9,0]]    

print(stack[-1][0])
    
    
    

































 



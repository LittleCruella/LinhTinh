def pp(arr):
    dem = 0
    arr.reverse()
    while True:
        test = 0
        temp = arr.copy()
        for i in range(1, len(arr)):
            if (temp[i] < temp[i - 1]):
                arr.remove(temp[i])
                test += 1
        dem += 1
        if test == 0:
            break

    return dem - 1



n = int(input())
arr = []
for i in range(n):
    x = int(input())
    arr.append(x)

print(pp(arr))
    


def truck_tour(n):
    fuel = loc = 0

    for i in range (len(n)):
        fuel += n[i][0] - n[i][1]
        if fuel < 0:
            loc = i + 1
            fuel = 0

    return loc


n = int(input())
x = []
for i in range(n):
    a = int(input())
    b = int(input())
    
    x.append([a, b])

print(truck_tour(x))





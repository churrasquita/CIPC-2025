G = 6.67430 * 10 ** (-11)

n, mr = map(int, input().split())
x = list(map(int, input().split()))
m = list(map(int, input().split()))

sumar = []
for i in range(n):
    sumar.append(G * mr * m[i])


def condicion(mid):
    tot = 0
    for i in range(n):
        if (x[i] == mid):
            continue
        dist2 = (x[i] - mid) * (x[i] - mid)
        if (dist2 == 0):
            dist2 += 10**-6
        force = G * mr * m[i]
        force /= dist2
        if (x[i] < mid):
            tot += force
        else:
            tot -= force
    return tot

def bs(low,high ):
    while abs(high - low) > 10**(-6):
        mid = (low + high) / 2
        if condicion(mid) < 0:
            high = mid
        else:
            low = mid
    return (low + high) / 2

points = []
for i in range(1, n):
    l = x[i-1]
    r = x[i]
    points.append(bs(l, r))
    #points.append(l)



print(len(points))
print(" ".join(map(str, points)))


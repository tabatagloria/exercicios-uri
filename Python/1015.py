x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())

distancia = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 1/2)

print('{:.4f}\n'.format(distancia))

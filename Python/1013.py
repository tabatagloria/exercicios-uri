a = int(input())
b = int(input())
c = int(input())

maiorAb = (a + b + abs(a - b)) / 2
maior = (maiorAb + c + abs(maiorAb - c)) / 2

print('{:.0f} eh o maior'.format(maior))

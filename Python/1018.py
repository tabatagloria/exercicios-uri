n = int(input())
lista = [100, 50, 20, 10, 5, 2, 1]

print('{}'.format(n))

for i in lista:
    notas = n // i
    n = n % i
    print('{} nota(s) de R$ {},00'.format(notas, i))

n = int(input())
lista = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00]

print('{}\n'.format(n))

for i in lista:
    notas = n // i
    n = n % i
    print('{:.0f} nota(s) de R$ {:.2f}'.format(notas, i))

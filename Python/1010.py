cod1 = int(input())
pecas1 = int(input())
valor1 = float(input())

cod2 = int(input())
pecas2 = int(input())
valor2 = float(input())

total = pecas1*valor1 + pecas2*valor2

print('VALOR A PAGAR: R$ {}\n' .format(round(total, 2)))

nome = str(input())
salario = float(input())
vendas = float(input())

total = salario + vendas * 0.15

print('TOTAL = R$ {}\n' .format(round(total, 2)))

n = int(input())

ano = n // 365
d = n % 365
meses = d // 30
dias = d % 30

print('{} ano(s)'.format(ano))
print('{} mes(es)'.format(meses))
print('{} dia(s)'.format(dias))

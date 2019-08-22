n = int(input())

minuto = n // 60
segundo = n % 60
hora = minuto // 60

if minuto >= 60:
    minuto = minuto - (hora * 60)

print('{}:{}:{}\n'.format(hora, minuto, segundo))

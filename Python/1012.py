a = float(input())
b = float(input())
c = float(input())

triangulo = (a * c) / 2
circulo = 3.14159 * pow(c, 2)
trapezio = (a + b) * c / 2
quadrado = pow(b, 2)
retangulo = a * b

print('TRIANGULO: {:.3f}'.format(triangulo))
print('CIRCULO: {:.3f}'.format(circulo))
print('TRAPEZIO: {:.3f}'.format(trapezio))
print('QUADRADO: {:.3f}'.format(quadrado))
print('RETANGULO: {:.3f}'.format(retangulo))

a = float(input("Digite o primeiro lado do triangulo retangulo: "))
b = float(input("Digite o segundo lado do tringulo retangulo: "))
c = float(input("Digite o terceiro lado do triangulo retangulo: "))

if ((a*a == b*b + c*c) or (b*b == a*a + c*c) or (c*c == a*a + b*b)):
    print("forma um tringulo retangulo")
else:
    print("nao forma um triangulo retangulo")
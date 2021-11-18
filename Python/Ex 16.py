a = float(input("Digite o primeiro lado do triangulo: "))
b = float(input("Digite o segundo lado do tringulo: "))
c = float(input("Digite o terceiro lado do triangulo: "))

if a > (b + c):
    print("nao forma um tringulo")
else:
    if b > (a + c):
        print("nao forma um tringulo")
    else:
        print("nao forma um triangulo")
        if ((a == b) and (b == c)):
            print("trinagulo equilatero")
        else:
            if ((a == b) or (a == c) or (b == c)):
                print("tringulo isosceles")
            else:
                if ((a != b) or (a != c) or (b != c)):
                    print("tringulo escaleno")
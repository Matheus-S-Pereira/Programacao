a = float(input("Digite o primeiro valor: "))
b = float(input("Digite o segundo valor: "))
c = float(input("Digite o terceiro valor: "))

if a > b:
    if a > c:
        print("o maior valor e: ", a)
    else:
        print("o maior valor e: ", c)
else:
    if b > c:
        print("o maior valor e: ", b)
    else:
        print("o maior valor e: ", c)
n = float(input("Digite o valor para fazer a tabuada: "))

while(n <= 0):
    print("Não pode numero negativo!")
    n = int(input("Digite um outro numero para obter a tabuada: "))

b = float(input("Digite o valor inferior da tabuada: "))
a = float(input("Digite o valor superior da tabuada: "))

while(a < b):
    print("valor invalido")
    a = float(input("Digite um valor maior que o limite inferior: "))

while(b <= a):
    r = n * a
    print(f'{n} X {a} = {r}')
    a = a - 1
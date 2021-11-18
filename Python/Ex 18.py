s = float(input("Digite 1 se for do sexo masculino e 2 se for do sexo feminino: "))
a = float(input("Digite a sua altura em (m): "))
p = float(input("Digite o seu peso (em Kg): "))

imc = p / (a * a)

if s == 1:
 
    if imc < 20:
        print("Abaixo do peso")
    elif imc < 25:
        print("Peso ideal")
    else:
        print("Acima do peso")
else:
    if imc < 19:
        print("Abaixo do peso")
    elif imc < 24:
        print("Peso ideal")
    else:
        print("Acima do peso")

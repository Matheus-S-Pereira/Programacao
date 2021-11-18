a = float(input("Digite a sua altura em (m): "))
p = float(input("Digite o seu peso (em Kg): "))
 
imc = p / (a * a)
 
if imc < 20:
    print("Abaixo do peso")
elif imc < 25:
    print("Peso ideal")
else:
    print("Acima do peso")

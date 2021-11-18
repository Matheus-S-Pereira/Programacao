a = float(input("Digite o valor da aceleracao: "))
t = float(input("digite qual o tempo levado no percurso: "))
v0 = float(input("Digite o valor da velocidade inicial: "))

v=v0+a*t

vf=v*3.6

if (vf<=40):
    print("Veiculo Muito lento")
elif ((vf>40) and (vf<=60)):
    print("velocidade permitida")
elif ((vf>60) and (vf<=80)):
    print("velocidade de cruzeiro")
elif ((vf>80) and (vf<=120)):
    print("veiculo rapido")
else:
    print("Veiculo muito rapido")

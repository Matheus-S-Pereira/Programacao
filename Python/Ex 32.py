s=2
m=3
i=1

n = float(input("Digite a quantidade positiva e menor que 100 de numeros desejados da sequencia: "))

while(n < 1 or n > 100):
    print("valor invalido")
    n = int(input("Digite um outro numero: "))

if (n < 2):
    print("soma = 2")
    
else:
    v = 2
    print("2; ")

    for i in range(1 , i<n , 1):
        s=s+m
        v=v+s
        m=m+2

        print(f'{s}; ')
    
    print("Soma:")
    print(f'{v}; ')

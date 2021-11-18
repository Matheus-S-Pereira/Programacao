numeros = []
novo = []

for i in range ( 0 , 20 , 1 ):
    x =  int ( input ( 'Digite um numero:' ))
    numeros.append (x)

c = int ( input ( 'Digite a constante para multiplicar os valores do vetor:' ))

for i in range ( 0 , 20 , 1 ):
    y = numeros [ i ] * c 
    novo.append(y)

print ( 'Os numeros depois da multicacao ficaram:' )

for i in range ( 0 , 20 , 1 ):
    print ( novo [ i ])
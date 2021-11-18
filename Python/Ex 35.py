numeros  = []
for i in range (0 , 20 , 1):
    
    
    if (i  ==  0):
        c = int (input ('Digite a constante para muntiplicar os valores do vetor:'))
    
    n = int ( input ('Digite um numero:'))
    n =  n * c
    numeros.append(n)
 
print ('Os numeros depois da multiplicacao ficaram:')

for i in range ( 0 , 20 , 1 ):
    print (numeros [ i ])
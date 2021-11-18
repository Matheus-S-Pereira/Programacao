m = 0
numeros = []
for i in range ( 0 , 10 , 1 ):
    x  =  int ( input ('Digite um numero:'))
    numeros.append(x)
 
print ('Os numeros que você digitou foram:')

for i in range ( 0 , 10 , 1 ):
    if ( numeros [ i ] > m ):
        m = numeros [ i ]

print('o maior numero digitado foi:')
print(f'{m}; ')
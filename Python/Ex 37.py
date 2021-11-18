numeros  = []
equivalente  = []

q = int ( input ( ' Digite a quantidade de valores:' ))

while  q  >  20  or  q  <=  0 :
    q = int ( input ( 'Digite uma quantidade válida de valores:' ))

for i in range ( 0 , q , 1 ):
    x  =  int ( input ( 'Digite um numero:' ))
    numeros.append(x)

l = int ( input ( 'Digite o número que deseja localizar:' ))

for i in range ( 0 , q , 1 ):

    if ( l == numeros [ i ]):
        print ("Valor esta na posição:" f'{i}')       

if ( l != numeros[i]):
    print ( "Valor não encontrado no vetor" )
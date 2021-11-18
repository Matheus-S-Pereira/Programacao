n1=1
n2=1

print(f'{n1};')
print(f'{n2};')

for q in range(0, 28, 1):
    r=n1+n2
           
    print(f'{r}, ')
        
    n2=n1
    n1=r

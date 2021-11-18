n1=1
n2=1
n3=1

print(f'{n1};')
print(f'{n2};')
print(f'{n3};')

for q in range(0, 17, 1):
    r=n1+n2+n3

    print(f'{r}; ')

    n3=n2
    n2=n1
    n1=r

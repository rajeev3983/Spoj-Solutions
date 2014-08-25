i=raw_input()
i=int(i)
for j in range(i):
    x=raw_input()
    y=x.split(' ')
    a=y[0]
    a=a[::-1]
    b=y[1]
    b=b[::-1]
    a=int(a)
    b=int(b)
    c=a+b
    c=str(c)
    c=c[::-1]
    c=int(c)
    print c
    


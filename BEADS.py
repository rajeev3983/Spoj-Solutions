def fun1(maxstring,m,maxstart,start):
    if maxstring <= m:
        return maxstring,maxstart
    else:
        return m,start

i=input()
for j in range(i):
    maxstart=0
    start=0;
    k=raw_input()
    maxstring=k
    l=len(k);
    k=k+k
    while start < l:
        m=k[start:start+l]
        maxstring,maxstart = fun1(maxstring,m,maxstart,start)
        start+=1
    print maxstart+1
    
        


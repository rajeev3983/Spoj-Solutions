p=4000000007
import time
def power(base, exp):
    if(exp==1):
        return base
    else:
        if(exp==2):
            return (base*base % p)
    half = power(base,exp>>1)
    if(exp & 1):
        return ((((half * half) % p) * base) % p)
    return ((half * half) % p)

d=input()
t=power(d,1000000002)
#t=d
#1893436200
if(t> 1893436200):
    t=p-t
#t=t-19800
print  time.ctime(t)


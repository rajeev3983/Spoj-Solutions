import sys
import math
def volume(a,b,c,d,e,f):
    A=f*f
    B=e*e
    C=d*d
    D=c*c
    E=b*b
    F=a*a
    vol =  math.sqrt((- A*B*C - A*D*E - B*D*F - C*E*F + A*C*D + B*C*D + A*B*E + B*C*E
           + B*D*E + C*D*E + A*B*F + A*C*F + A*D*F + C*D*F + A*E*F + B*E*F
           - C*C*D - C*D*D - B*B*E - B*E*E - A*A*F - A*F*F)/144)
    return vol

def surface(a,b,c,d,e,f):
    total=0
    s=(a+b+d)/2
    total+=math.sqrt(s*(s-a)*(s-b)*(s-d))
    s=(b+c+f)/2
    total+=math.sqrt(s*(s-b)*(s-c)*(s-f))
    s=(a+c+e)/2
    total+=math.sqrt(s*(s-a)*(s-c)*(s-e))
    s=(d+e+f)/2
    total+=math.sqrt(s*(s-d)*(s-e)*(s-f))
    return total

    
i=input()
for j in range(i):
    a,b,c,d,e,f = map(float,sys.stdin.readline().split())
    
    g = 3*volume(a,b,c,d,e,f)
    k=(surface(a,b,c,d,e,f))
    g=g/k
    print "%.4f" % g
    


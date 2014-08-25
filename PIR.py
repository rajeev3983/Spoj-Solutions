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

    
i=input()
for j in range(i):
    a,b,c,d,e,f = map(float,sys.stdin.readline().split())
    
    g = volume(a,b,c,d,e,f)
    print "%.4f" % g
    


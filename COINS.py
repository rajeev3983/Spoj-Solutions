d={}
def find(n):
    if n==0:
    return n
    if not n in d:
    d[n]=max(n,find(n/2)+find(n/3)+find(n/4))
    return d[n]
for x in range(10):
    n=input()
    print find(n)


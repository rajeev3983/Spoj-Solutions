s=raw_input()
while(s[0]!='*'):
    b=True
    s=s.split()
    for x in range(len(s)-1):
    if s[x][0].upper()!=s[x+1][0].upper():
b=False
break
if b:
print "Y"
else:

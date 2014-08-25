while True:
    a=raw_input().split()
    i=0;
    x=a[0]
    y=a[1]
    if x=="*" and y=="*":
        break
    while i<len(x) and x[i]=="0":
        i+=1
    if i<len(x):
      x=x[i:]
    else:
        x="0"
    i=0
    while i<len(y) and y[i]=="0":
        i+=1
    if i<len(y):
        y=y[i:]
    else:
        y="0"
    if len(x)<len(y):
        print "<"
    elif len(x)>len(y):
        print ">"
    else:
        i=0;
        while i<len(x) and x[i]==y[i]:
            i+=1
        if i==len(x):
            print "="
        elif x[i]<y[i]:
            print "<"
        else:
            print ">"
        


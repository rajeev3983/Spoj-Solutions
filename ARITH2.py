i=input()
while(i>0):
    a=raw_input()
    a=raw_input().split()
    flag=0
    l=len(a)
    result=int(a[0])
    m=1;
    c="+"
    while(a[m]!="="):
        if(flag==0):
            c=a[m]
            flag=1
        else:
            flag=0
            if c=="+":
                result=result+int(a[m])
            elif c=="-":
                result=result- int(a[m])
            elif c=="*":
                result=result *int(a[m])
            else:
                result= result/ int(a[m])
        m+=1
    print result
    i-=1


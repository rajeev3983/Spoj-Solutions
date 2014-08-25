n=raw_input()
a=[]
count=0
p=True
while p:
    total=0;
    count+=1
    for k in range(len(n)):
        total+=(int(n[k]))*(int(n[k]))
    if total == 1:
        print count
        p=False
    elif total in a:
        print -1
        p=False
    else:
        a.append(total)
        
        n=str(total)
        
                           


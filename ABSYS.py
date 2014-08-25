n=input()
while n>0:
    n-=1
    t=raw_input()
    s=raw_input().split()
    if "machula" in s[0]:
        print str(int(s[4])-int(s[2])),s[1],s[2],s[3],s[4]
    elif "machula" in s[2]:
        print s[0],s[1],str(int(s[4])-int(s[0])),s[3],s[4]
    else:
        print s[0],s[1],s[2],s[3],str(int(s[0])+int(s[2]))
                            


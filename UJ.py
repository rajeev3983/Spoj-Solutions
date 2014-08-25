while(True):
      a=raw_input().split()
      x=int(a[0])
      y=int(a[1])
      if(x!=0 or y!=0):
        k=x**y    
        print k
        x=[]
      else:
        break




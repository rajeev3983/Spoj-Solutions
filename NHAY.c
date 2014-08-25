#include <stdio.h>
#include <stdlib.h>
void compute( char *p, int *failure, int l ){
  int i,j;
  failure[0]=0;
  i=1;
  j=0;
  while(i<l){
    if(p[i]==p[j]){
      failure[i]=failure[i-1]+1;
      i++;
      j++;
    }
    else if(j>0)
      j= failure[j-1];
    else{
      failure[i]=0;
      i++;
    }
  }
}
int main(){
  int pLength,i,j,*failure,read,printed;
  char *p,c;
  while( scanf("%d",&pLength) ){
    p = (char *)malloc(sizeof(char)*pLength);
    failure = (int *)malloc(sizeof(int)*pLength);
    scanf("%s",p);
    if(p[0]=='\0' && pLength!=0)
      return 0;
    compute(p,failure,pLength);
    i=1;
    j=0;
    read=1;
    getchar();
    printed = 0;
    while(1){
      if(read){
	c=getchar();
	if( c<'a' || c>'z'|| c=='\n')
	  break;
	read =0;
      }
      if(c==p[j]){
	if(j==pLength-1){
	  printf("%d\n",i-pLength);
	  printed = 1;
	  j=failure[j-1];
	}
	else{
	  i++;
	  j++;
	  read=1;
	}
      }
      else if(j>0)
	j = failure[j-1];
      else{
	i++;
	read=1;
      }
    }
    if(!printed)
      printf("\n");
  }
}


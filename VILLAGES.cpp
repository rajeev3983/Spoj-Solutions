#include <stdio.h>
#include <iostream>
#include <bitset>
int B[1000][1000];
int C[1000];
using namespace std;

void readInt(int *n){
  int sign = 1;
  char c;
  int found = 0;
  *n = 0;
  while(1){
    c = getc(stdin);
    
    switch(c){
    case '-' :
      sign = -1;
      found = 1;
      break;
    case ' ':
      if(found) goto jump;
      break;
    case '\n':
      if(found) goto jump;
      break;
    default:
      if(c>='0' && c<='9'){
	*n = (*n)*10+c-'0';
	found = 1;
      }else goto jump;
      break;
    }
  }
    
 jump:
  (*n) *= sign;
}

int main(){
  int M,N,i,j,k,t;
  long long count;
  readInt(&N);
  readInt(&M);
  bitset<1000000> A;
  for(i=0;i<M;i++){
    readInt(&j);
    readInt(&k);
    A.set(N*(j-1)+k-1);
    B[j-1][C[j-1]++]=k-1;
  }
  count = 0;
  for(i=0;i<N;i++)
    for(j=i+1;j<N;j++){
      t=0;
      for(k=0;k<C[j];k++){
	if(A.test(N*i+ B[j][k]))
	  t++;
      }
      if(t>=2)
	count+=(t*(t-1))>>1;
    }
  printf("%lld\n",count);
}



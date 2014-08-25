#include <stdio.h>
#include <math.h>
#define N 1000000
unsigned int A[N/64];
unsigned int D[N];
unsigned int C[N];
unsigned int NF[N];
int total;
int check(int i){
  int j = i/64;
  int k = (i%64)/2;
  return (A[j] & 1<<k)>>k;
}

void set(int i){
  int j = i/64;
  int k = (i%64)/2;
  A[j]=(A[j] | 1<<k);
}

void sieve(){
  int i,j,k,temp,c;
  A[0]=1;
  k =sqrt(N);
  for(i=3;i<=k;i+=2){
    if(!check(i)){
      for(j=i+2*i;j<=N;j+=2*i){
	set(j);
	D[j]=i;
      }
    }
  }
  total = 0;
  NF[0]=1;
  NF[1]=1;
  NF[2]=2;
  c=0;
  for(i=3;i<N;i+=2){
    if(!check(i)){
      NF[i]=2;
    }
    else{
      temp =i;
      k=0;
      while(temp%D[i]==0){
	k++;
	temp/=D[i];
      }
      NF[i]=(k+1)*NF[temp];
      if(NF[i]==4 && k==1)
	C[i]=1;
      if(NF[NF[i]]==4 && C[NF[i]]==1){
	if(c==8){
	  printf("%d\n",i);
	  c=0;
	}
	else
	  c++;
      }
    }
    temp = i+1;
    k = 0;
    while(temp%2==0){
      k++;
      temp/=2;
    }
    NF[i+1]=(k+1)*NF[temp];
    if(NF[i+1]==4 && k==1)
      C[i+1]=1;
    if(NF[NF[i+1]]==4 && C[NF[i+1]]==1){
      if(c==8){
	printf("%d\n",i+1);
	c=0;
      }
      else
	c++;
    }
  }
}

int main(){
  int i,j,k,count,n,c;
  sieve();
  
}


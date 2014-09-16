#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define N 10001
#define lld unsigned long long 
using namespace std;
unsigned int A[N/64];
lld divisor[N];
lld totient[N];
lld sum[N];

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
	divisor[j]=i;
	set(j);
      }
    }
  }
  totient[0]=0;
  totient[1]=1;
  totient[2]=1;
  for(i=3;i<N;){
    if( !check(i) )
      totient[i]=i-1;
    else{
      k = 0;
      j = i;
      while(j%divisor[i]==0){
	k++;
	j/=divisor[i];
      }
      totient[i]= pow(divisor[i],k-1)*(divisor[i]-1)*totient[j];
    }
    i++;
    k = 0;
    j = i;
    while(j%2==0){
      k++;
      j/=2;
    }
    totient[i]= pow(2,k-1)*totient[j];
    i++;
  }
  sum[0]=0;
  for(i=1;i<N;i++)
    sum[i]=sum[i-1]+totient[i];
}

int main(){
  int i,j,k,count,n,c;
  sieve();
  scanf("%d",&i);
  while(i--){
    scanf("%d",&j);
    printf("%llu\n",sum[j]*sum[j]);
  }
}

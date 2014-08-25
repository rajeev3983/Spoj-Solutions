#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int gcd(int a,int b){
  if (b==0)
    return a;
  else
    return gcd(b,a%b);
}

void seive(bool isNPrime[],int Primes[],int &nPrimes )
{
  int MAX=1000000;
  isNPrime[0]=true;
  isNPrime[1]=true;
  int i;
  for(i=0;i*i<MAX;i++){
    if(isNPrime[i]==false){
      for(int j=i*i;j<MAX;j=j+i)
	isNPrime[j]=true;
    }
  }
  for(i=0;i<MAX;i++)
    if(isNPrime[i]==false)
      Primes[nPrimes++]=i;
}

int main(){
  int t,g,a,b,f,i;
  scanf("%d",&t);
  bool isNPrime[1000000];
  int A[100000];
  int nPrimes=0;
  seive(isNPrime,A,nPrimes);
  
  while(t--){
    
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    f=1;
    if(g==1){
      printf("%d\n",f);
      continue;
    }
    for(i=0;A[i]<=g && i<nPrimes;i++){
      int c=1;
      while(g%A[i]==0){
	g=g/A[i];
	c++;
      }
      f=f*c;
    }
    if(f==1)
      f++;
    printf("%d\n",f);
  }
}

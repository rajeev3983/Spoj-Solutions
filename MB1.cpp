#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define N 1100000
using namespace std;
vector<unsigned long long> v;
unsigned int A[N/64];
unsigned long long primes[100000];
unsigned long long pp[1000];
int total;
int pn;

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

bool isPalindrom( int n ){
  char s[20];
  sprintf(s,"%d",n);
  int i,j,k;
  j=i=0;
  while(s[j]!='\0')
    j++;
  j--;
  while(i<j){
    if(s[i]==s[j]){
      i++;
      j--;
    }
    else
      return false;
  }
  return true;
}

void sieve(){
  int i,j,k,temp,c;
  A[0]=1;
  k =sqrt(N);
  for(i=3;i<=k;i+=2){
    if(!check(i)){
      for(j=i+2*i;j<=N;j+=2*i)
	set(j);
    }
  }
  primes[0]=2;
  total = 1;
  pp[0]=2;
  pn =1;
  for(i=3;i<N;i+=2){
    if(!check(i)){
      primes[total++]=i;
      if( isPalindrom(i) ){
	pp[pn++]= i;
      }
    }
  }
}

unsigned long long digitProduct( unsigned long long n ){
  unsigned long long product = 1,i,j;
  while(n!=0){
    i = n%10;
    if(i!=0)
      product *=i;
    n/=10;
  }
  return product;
}

int main(){
  int i,j,k,count,n,c;
  sieve();
  scanf("%d",&i);
  while(i--){
    scanf("%d",&j);
    k = digitProduct(pp[j-1]);
    printf("%llu %llu\n",pp[j-1],primes[k-1]);
  }
}

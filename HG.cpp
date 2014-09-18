#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define N 100000
#define lld unsigned long long 
#define mod 1000000000
using namespace std;
vector<vector<int> > v;
unsigned int A[N/64];
unsigned int primes[100000];
int total;
lld a[1000];
lld b[1000];
int n,m;

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
      }
    }
  }
  primes[0]=2;
  total = 1;
  for(i=3;i<N;i+=2)
    if(!check(i))
      primes[total++]=i;
}


void fun(){
  lld gcd = 1;
  int i,j,k1,k2,l,k;
  bool flag;
  flag= false;
  for(i=0;i<total;i++){
    k1=0;
    for(j=0;j<n;j++){
      if(a[j]%primes[i]==0){
	while(a[j]%primes[i]==0){
	  k1++;
	  a[j]/=primes[i];
	}
      }
    }
    k2 = 0;
    for(j=0;j<m;j++){
      if(b[j]%primes[i]==0){
	while(b[j]%primes[i]==0){
	  k2++;
	  b[j]/=primes[i];
	}
      }
    }
    k = min(k1,k2);
    for(l=0;l<k;l++){
      gcd*=primes[i];
      if(gcd>mod){
	flag = true;
	gcd%=mod;
      }
    }
  }
  sort(a,a+n);
  sort(b,b+m);
  i=j=0;
  while(i<n && j<m){
    if( a[i]<b[j])
      i++;
    else if( a[i]>b[j] )
      j++;
    else {
      gcd*= a[i];
      if( gcd> mod){
	flag = true;
	gcd%=mod;
      }
      i++;
      j++;
    }
  }
  if(!flag)
    printf("%llu\n",gcd);
  else{
    char s[10];
    sprintf(s,"%llu",gcd);
    i=0;
    while(s[i]!='\0'){
      i++;
    }
    for(j=0;j<9-i;j++)
      printf("%c",'0');
    printf("%llu\n",gcd);
  }
}

int main(){
  int i,j,k,count,c;
  sieve();
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%llu",a+i);
  scanf("%d",&m);
  for(i=0;i<m;i++)
    scanf("%llu",b+i);
  fun();
}


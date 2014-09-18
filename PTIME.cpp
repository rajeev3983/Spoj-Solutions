#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define N 10000
#define lld unsigned long long 
using namespace std;
vector<vector<int> > v;
unsigned int A[N/64];
unsigned int primes[100000];
unsigned int a[N];
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
      }
    }
  }
  primes[0]=2;
  total = 1;
  for(i=3;i<N;i+=2)
    if(!check(i))
      primes[total++]=i;
}


int main(){
  int i,j,k,count,n;
  bool flag = false;
  sieve();
  scanf("%d",&n);
  for(i=0;i<n;i++) a[i]=i+1;
  for(i=0;i<total;i++){
    k = 0;
    for(j=1;j<n;j++){
      if(a[j]%primes[i]==0){
	while(a[j]%primes[i]==0){
	  k++;
	  a[j]/=primes[i];
	}
      }
    }
    if( k>0){
    if(flag) cout<<" * ";
    cout<<primes[i]<<"^"<<k;
    flag = true;
    }
  }
  cout<<endl;
}



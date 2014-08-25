#include <stdio.h>
#include <math.h>
#define N 100000
#define ull unsigned long long int
unsigned int A[N/64];
ull primes[N/4];
ull total;
ull max( ull a, ull b){
  if ( a>b)
    return a;
  return b;
}

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
  total = 1;
  primes[0]=2;
  for(i=3;i<=N;i+=2){
    if(!check(i))
      primes[total++]=i;
  }
}

int main(){
  ull i,j,t,k,s,count,n,c,c1,c2;
  sieve();
  scanf("%llu",&t);
  while(t--){
    scanf("%llu%llu",&i,&j);
    k=0;
    count =1;
    c1=0;
    c2=0;
    while(( i!=1 || j!=1) && ( primes[k]*primes[k]<=i || primes[k]*primes[k]<=j ) ){
      if(i%primes[k]==0 || j%primes[k]==0){
	while(i%primes[k]==0){
	  c1++;
	  i/=primes[k];
	}
	while(j%primes[k]==0){
	  c2++;
	  j/=primes[k];
	}
	if(c1!=c2){
	  for(s=0;s<max(c1,c2);s++)
	    count*=primes[k];
	}
	c1=0;
	c2=0;
      }
      k++;
    }
    if(i!=j)
      count=count*i*j;
    printf("%llu\n",count);
  }
  return 0;
}


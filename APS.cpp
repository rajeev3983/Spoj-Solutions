#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdio>
#define sq(x) ((x)*(x))
#define i64 unsigned long long
#define MAX 10000010
#define LMT 4000

unsigned flag[MAX/64];
unsigned primes[5761460], total;
long long   m[10000000];
long long  m2[10000000];
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
  unsigned i, j, k;
  flag[0]|=0;
  for(i=3;i<LMT;i+=2)
    if(!chkC(i)){
      m2[i]=i;
      for(j=i*i,k=i<<1;j<MAX;j+=k){
	setC(j);
	if(m2[j]==0)
	  m2[j]=i;
	
      }
    }
  
  for(i=3;i<MAX;i+=2)
    if(!chkC(i))
      m2[i]=i;
}


int main()
{
  
  sieve();
  int i,t;
  m[0]=0;
  m[1]=0;
  m[2]=2;
  for(i=3;i<=10000000;i+=2){
    m[i]=m[i-1]+m2[i];
    m[i+1]=m[i]+2;
  }
  scanf("%d",&t);
  while(t--){
    scanf("%d",&i);
    printf("%lld\n",m[i]);
  }
  return 0;
}

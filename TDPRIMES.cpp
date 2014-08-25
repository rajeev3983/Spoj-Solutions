
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

#define sq(x) ((x)*(x))
#define i64 unsigned long long
#define MAX 100000000
#define LMT 10000

unsigned flag[MAX/64];
unsigned primes[5761460], total;

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
  unsigned i, j, k;
  flag[0]|=0;
  for(i=3;i<LMT;i+=2)
    if(!chkC(i))
      for(j=i*i,k=i<<1;j<MAX;j+=k)
	setC(j);
  primes[(j=0)++] = 2;
  for(i=3;i<MAX;i+=2)
    if(!chkC(i))
      primes[j++] = i;
  total = j;
  //cout<<total<<endl;
}



int main()
{
  int t, x,i;
  i64 n, phi1;
  sieve();
  i=0;
  while(i<=total){
    cout<<primes[i]<<endl;
    i+=100;
  }
  return 0;
}



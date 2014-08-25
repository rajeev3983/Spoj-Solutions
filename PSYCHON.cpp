#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define i64 unsigned long long
#define MAX 10000
#define LMT 100

unsigned flag[MAX/64];
unsigned primes[10000], total;

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
}


bool factor(i64 n)
{
  int measure=0;
  unsigned i, v;
  i64 t;
  for(i=0, t=primes[i]; i<total && t*t <= n; t = primes[++i])
    {
      if(n % t == 0)
	{
	  v = 0;
	  while(n % t == 0)
	    {
	      v++;
	      n /= t;
	    }
	  if(v%2==0)
	    measure++;
	  else
	    measure--;
	}
    }
  if(n!=1)
    measure--;
  return measure>0;
}

int main()
{
  int t, x;
  i64 n;
  sieve();
  scanf("%d", &t);
  for(x=1; x<=t; x++)
    {
      scanf("%llu", &n);
      if(factor(n))
	printf("Psycho Number\n");
      else
	printf("Ordinary Number\n");
      
    }
  return 0;
}



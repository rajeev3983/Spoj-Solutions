#include<stdio.h>
int main()
{
  long long int t,a,triagle;
  scanf("%lld",&t);
  while(t--)
    {
      scanf("%lld",&a);
      long long int triagle=a*(a+2)*(2*a+1)/8;
      printf("%lld\n",triagle);
    }
  return 0;
}

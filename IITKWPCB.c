#include <stdio.h>
#define lld unsigned long long int
lld gcd(lld a, lld b){
  if( b == 0 )
    return a;
  return gcd(b,a%b);
}

int main(){
  lld t,i,j,k;
  scanf("%llu",&t);
  while(t--){
    scanf("%llu",&i);
    j= i/2;
    while(gcd(i,j)!=1)
      j--;
    printf("%llu\n",j);
  }
  return 0;
}

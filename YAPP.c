#include <stdio.h>
#define lld long long int
#define mod 1000000007
lld expo( lld ep, lld base ){
  lld i;
  if( ep == 0 )
    return 1;
  if ( ep  == 1 )
    return base;
  i = expo(ep/2,base);
  if( ep & (lld)1 )
    return (base*((i*i)%mod))%mod;
  return (i*i)%mod;
} 

int main(){
  lld i,j,t,k;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&i);
    k = expo(i-1,2);
    printf("%lld\n",k);
  }
  return 0;
}

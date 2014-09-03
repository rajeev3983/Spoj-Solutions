#include <stdio.h>
#define lld unsigned long long int
lld fun( lld i,lld j, lld p){
  lld mod = i,k;
  for(k=i+1;k<=j;k++){
    mod = (mod*k)%p;
  }
  return mod;
}

lld inverse( lld j, lld p, lld P){
  lld i;
  if ( p == 0)
    return 1;
  if ( p == 1 )
    return j;
  i = inverse(j, p/2,P);
  if( p & 1){
    return (j*((i*i)%P))%P;
  }
  return (i*i)%P;
}

int main(){
  lld t,P,N,i,j,k;
  scanf("%llu",&t);
  while(t--){
    scanf("%llu%llu",&N,&P);
    if( N>=P){
      printf("%d\n",0);
    }
    else if(N+1<=P-1){
      j = fun(N+1,P-1,P);
      k = inverse(j,P-2,P);
      printf("%llu\n",((P-1)*k)%P);
    }
    else
      printf("%llu\n",P-1);
  }
  return 0;
}

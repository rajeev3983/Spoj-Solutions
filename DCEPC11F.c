#include <stdio.h>
#define lld long long int
#define mod 1000000007

lld inverse( lld a, lld p ){
  lld i,j,k;
  if( p == 1 )
    return a;
  i = inverse(a,p/2);
  if( p & (lld )1 )
    return (((a*i)%mod)*i)%mod;
  return (i*i)%mod;
}

lld C(lld n, lld r){
  lld t,nom,deno,n1,r1;
  if( r>n )
    return 0;
  if( n == r || r==0 )
    return 1;
  if( n-r > r )
    r = n-r;
  nom = deno = 1;
  n1 = r+1;
  r1 = 1;
  while(n1<=n){
    nom = (nom*n1)%mod;
    n1++;
    deno = (deno*r1)%mod;
    r1++;
  }
  return (nom*inverse(deno,mod-2))%mod;
}

lld fun( lld n, lld m ){
  lld c,t,c1,i,j,k;
  c = 0;
  for(i=0;i<=m;i++){
    t = C(n,i);
    c1 = 0;
    for(j=0;j<=m;j++){
      c1 = (c1 + C(n-i,j))%mod;
    }
    c = (c+ (t*c1)%mod)%mod;
  }
  return c;
}

int main(){
  lld t,m,n,i,j,k,count;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld",&n,&m);
    m -= 5;
    count = 0;
    for(i=0;i<=n/2;i++){
      count += (((C(2*i,i)*C(n,2*i))%mod)*fun(n-2*i,m))%mod;
      count = count%mod;
    }
    printf("%lld\n",count);
  }
  return 0;
}

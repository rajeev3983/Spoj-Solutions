#include <iostream>
#define mod 1000000007
#define lld long long int
using namespace std;



lld inverse( lld a, lld p ){
  lld i,j,k;
  if( p == 1 )
    return a;
  i = inverse(a,p/2);
  if( p & (lld )1 )
    return (((a*i)%mod)*i)%mod;
  return (i*i)%mod;
}

lld nCr(lld n, lld r){
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


int main(){
  lld n,w,t,r,total;
  cin>>n>>w>>t>>r;
  total = nCr(n,w);
  total *= nCr(n-w,t);
  total%=mod;
  cout<<total<<endl;
}

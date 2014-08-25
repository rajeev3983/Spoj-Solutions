#include <iostream>
#include <map>
#define  mod 1000000007
#define ull unsigned long long int
using namespace std;

map<int,ull> m;
ull fib(ull n){
  ull i,j,k;
  if(n==0)
    return 0;
  if(n==1 || n==2)
    return 1;
  if(n%2){
    i=(n+1)/2;
    if(!m[i]){
      j=fib(i);
      m[i]=j;
    }
    else{
      j=m[i];
    }
    if(!m[i-1]){
      k=fib(i-1);
      m[i-1]=k;
    }
    else{
      k=m[i-1];
    }
    return (((j*j)%mod)+((k*k)%mod))%mod;
  }
  i=n/2;
  j=fib(i);
  k=fib(i-1);
  return ((((2*k)%mod)+(j%mod))*j)%mod;
}

int main(){
  ull i;
  long long int j;
  int t,m,n;
  cin>>t;
  while(t--){
    cin>>m>>n;
    j=fib(n+2)-fib(m+1);
    if(j<0)
      j+=mod;
    cout<<j<<endl;
  }
}


#include <iostream>
#define ull long long int
#define N 1000000007
using namespace std;
ull ex(ull base, ull exponent){
  if( exponent == 1)
    return base;
  ull a,b,c;
  a = ex(base,exponent/2);
  if(exponent%2==0)
    return (a*a)%N;
  return (((a*a)%N)*base)%N;
}

int main(){
  ull a,b,i,j,k;
  cin>>a>>b;
  while(a!=0){
    i = ex(a,b+1);
    i = i-a;
    if( i<0)
      i+=N;
    k = ex(a-1,N-2);
    i = (i*k)%N;
    cout<<i<<endl;
    cin>>a>>b;
  }
}


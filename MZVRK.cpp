#include <iostream>
#include <cmath>
#include <map>
#define lld unsigned long long int
using namespace std;

lld compute( lld x ){
  lld i,j,k,sum,n;
  i=0;
  sum = 0;
  while( pow(2,i)<=x ){
    k = pow(2,i);
    j = pow(2,i+1);
    n = (x-k)/j +1;
    sum += n*k;
    i++;
  }
  return sum;
}

int main(){
  lld a,b;
  cin>>a>>b;
  cout<<compute(b)-compute(a-1)<<endl;
}

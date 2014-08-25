#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}
int main(){
  int t,i,j,k,n;
  cin>>t;
  while(t--){
    cin>>i>>j;
    k=gcd(fabs(i),fabs(j));
    i/=k;
    j/=k;
    cout<<fabs(i-j)<<endl;
  }
}


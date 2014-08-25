#include <iostream>
using namespace std;
int gcd(int a, int b){
  if ( b==0 )
    return a;
  return gcd(b,a%b);
}
int main(){
  int t,i,j,k;
  cin>>t;
  while(t--){
    cin>>i>>j;
    k = gcd(i,j);
    cout<<j/k<<" "<<i/k<<endl;
  }
}


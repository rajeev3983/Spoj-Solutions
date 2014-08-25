#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main(){
  ll i,j,k,n,t;
  cin>>t;
  for(i=1;i<=t;i++){
    cin>>n;
    cout<<"Case "<<i<<": ";
    j = sqrt(n);
    if( j*j==n )
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
}

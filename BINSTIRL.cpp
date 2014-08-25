#include <iostream>
using namespace std;
int main(){
  int t,n,k,i,j;
  cin>>t;
  while(t--){
    cin>>n>>k;
    if( (n-k) & (k-1)/2 )
      cout<<0<<endl;
    else
      cout<<1<<endl;
  }
}


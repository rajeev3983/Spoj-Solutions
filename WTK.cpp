#include <iostream>
using namespace std;

int main(){
  int t,i,j,n,k;
  cin>>t;
  while(t--){
    cin>>n;
    j = 0;
    k = n-1;
    for(i=0;i<n-1;i++,k--)
      j = ( j + k )%(i+2);
    cout<<j+1<<endl;
  }
}


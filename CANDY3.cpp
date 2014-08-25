#include <iostream>
using namespace std;
int main(){
  long long t,i,j,n,k;
  cin>>t;
  while(t--){
    k=0;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>j;
      k+=j;
      k=k%n;
    }
    if(k%n==0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}


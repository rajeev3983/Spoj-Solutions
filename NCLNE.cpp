#include <iostream>
using namespace std;
int a[1000000];
int main(){
  int t,i,n;
  long long d;
  cin>>t;
  while(t--){
    cin>>n;
    d=1;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n-1;i++)
      d=(d-a[i])*2;
    if(d==a[n-1])
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
}


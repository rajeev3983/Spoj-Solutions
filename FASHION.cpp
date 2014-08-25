#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int t,a[1000],b[1000],n,i;
  unsigned long long int c;
  cin>>t;
  while(t--){
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
      cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    c=0;
    for(i=0;i<n;i++){
      c+=a[i]*b[i];
    }
    cout<<c<<endl;
    
  }
}


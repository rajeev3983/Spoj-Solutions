#include <iostream>
#include <algorithm>
#define infi 1000000001;
using namespace std;
int main(){
  long a[20000],i,j,k,t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    m=infi;
    for(j=0;j<=n-k;j++){
      m=min(m,a[j+k-1]-a[j]);
    }
    cout<<m<<endl;
  }
}

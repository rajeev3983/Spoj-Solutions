#include <iostream>
using namespace std;
int main(){
  long long int i,j,k,m,n,t,c;
  cin>>t;
  c = t;
  while(t--){
    cin>>n;
    k = 0;
    m =1;
    for(i=0;i<n;i++){
      cin>>j;
      k += j;
      m = min(m,k);
    }
    if( m<1)
      m = -m +1;
    cout<<"Scenario #"<<c-t<<": "<<m<<endl;
  }
}

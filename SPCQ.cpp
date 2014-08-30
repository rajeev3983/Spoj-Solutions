#include <iostream>
#define lld  long long int
using namespace std;
inline lld sum( lld i ){
  lld s =0;
  while(i!=0){
    s+=i%10;
    i=i/10;
  }
  return s;
}

int main(){
  lld t,i,j,k;
  cin>>t;
  while(t--){
    cin>>i;
    while(i%sum(i)!=0)
      i++;
    cout<<i<<endl;
  }
}

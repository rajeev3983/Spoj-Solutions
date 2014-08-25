#include <iostream>
using namespace std;
int zeta(int n) {
  int ret = 0;
  for (int p = 5; p <= n; p*=5)
    ret += n/p;
  return ret;
}
int main(){
  int i,j,k,sum,l;
    
  cin>>k;
  while(k--){
    cin>>i;
    cout<<zeta(i)<<endl;
  }
}


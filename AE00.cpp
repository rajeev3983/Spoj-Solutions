#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,i,j,k;
  cin>>n;
  k=0;
  for(i=1;i<=sqrt(n);i++){
    for(j=i;j*i<=n;j++){
      k++;
    }
  }
  cout<<k<<endl;
}

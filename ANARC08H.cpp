#include <iostream>
using namespace std;
int main(){
  int n,i,j,k;
  cin>>n>>k;
  while(n!=0){
    j = 2;
    i = 1;
    while( j<= n){
      i = ( i + k -1 )%j + 1;
      j++;
    }
    cout<<n<<" "<<k<<" "<<i<<endl;
    cin>>n>>k;
  }
}


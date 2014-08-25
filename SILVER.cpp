#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  int i;
  cin>>n;
  while(n!=0){
    i=0;
    while(n>1){
      n=n>>1;
      i++;
    }
    cout<<i<<endl;
    cin>>n;
  }
}


#include <iostream>
using namespace std;
int main(){
  float i,j,k;
  cin>>i;
  while(i!= 0.00){
    j=0;
    k=2;
    while(j<i){
      j=j+ 1/k;
      k=k+1;
    }
    cout<< k-2 <<" card(s)"<< endl;
    cin>>i;
  }
}


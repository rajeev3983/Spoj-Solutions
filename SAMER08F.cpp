#include <iostream>
using namespace std;
int main(){
  int i,k,total;
  cin>>i;
  while(i!=0){
    total=0;
    while(i>0){
      total+=i*i;
      i--;
    }
    cout<<total<<endl;
    cin>>i;
  }
}


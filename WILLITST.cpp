#include <iostream>
using namespace std;
int main(){
  long long int i;
  cin>>i;
  bool flag=false;
  if(i<2){
    flag=true;
  }
  else{
    unsigned long long int j=2;
    while(j<i)
      j*=2;
    if(i==j)
      flag=true;
  }
  if(flag){
    cout<<"TAK"<<endl;
  }
  else{
    cout<<"NIE"<<endl;
  }
    
}


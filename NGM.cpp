#include <iostream>
using namespace std;
int main(){
  long long int d;
  cin>>d;
  if(d%10==0){
    cout<<2<<endl;
  }
  else{
    cout<<1<<endl;
    cout<<d%10<<endl;
  }
}

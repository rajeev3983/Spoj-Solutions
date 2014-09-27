#include <iostream>
using namespace std;
int main(){
  int t,i,j,k;
  cin>>t;
  while(t--){
    cin>>i>>j;
    if( (i&1) && (j&1) )
      cout<<"Ramesh"<<endl;
    else
      cout<<"Suresh"<<endl;
  }
}

#include <iostream>
using namespace std;
int main(){
  int i,t,k,m1,m2,n1,n2;
  cin>>t;
  while(t--){
    cin>>n1>>n2;
    m1=0;
    for(i=0;i<n1;i++){
      cin>>k;
      m1=max(m1,k);
    }
    m2=0;
    for(i=0;i<n2;i++){
      cin>>k;
      m2=max(m2,k);
    }
    if(m1>=m2){
      cout<<"Godzilla"<<endl;
    }
    else
      cout<<"MechaGodzilla"<<endl;
    
  }
}


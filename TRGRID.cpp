#include <iostream>
using namespace std;
int main(){
  int t,m,n;
  cin>>t;
  while(t--){
    cin>>n>>m;
    if(n>m){
      if(m%2==0)
	cout<<"U"<<endl;
      else
	cout<<"D"<<endl;
    }
    else if(m>n){
      if(n%2==0)
	cout<<"L"<<endl;
      else
	cout<<"R"<<endl;
    }
    else{
      if(n%2==0)
	cout<<"L"<<endl;
      else
	cout<<"R"<<endl;
    }
  }
}


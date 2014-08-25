#include <iostream>
using namespace std;
main(){
  int i,X,Y,x,y;
  cin>>i;
  for(;i>0;i--){
    cin>>X;
    cin>>Y;
    if(X==Y){
      if(X%2==0)
	cout<<2*X<<endl;
      else
	cout<<2*X-1<<endl;
    }
    else if(X-Y==2){
      if(X%2==0)
	cout<<X+Y<<endl;
      else
	cout<<X+Y-1<<endl;
    }
    else {
      cout<<"No Number"<<endl;
    }
  }
}
                          
       


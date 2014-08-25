#include <iostream>
using namespace std;
int main(){
  int i,start,j,k,a,b;
  int A[300];
  cin>>i;
  while(i--){
    for(k=0;k<300;k++){
      A[k]=0;
    }
    cin>>start;
    cin>>a>>b;
    while(a!=-1 && b!=-1){
      A[a]++;
      A[b]++;
      cin>>a>>b;
    }
    bool flag=true;
    for(k=0;k<300;k++){
      if(A[k]%2==1)
	{
	  flag=false;
	  break;
	}
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
               
               
  }
    
}


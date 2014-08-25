#include <iostream>
using namespace std;
int main(){
  int i,j,k,m,n;
  cin>>i;
  while(i!=-1){
    i--;
    k=i%6;
    if(k!=0){
      cout<<"N"<<endl;
    }
    else{
      k=i/6;
      m=0;
      n=1;
      while(m<k){
	m+=n;
	n++;
                                 
      }
                                 
      if (m==k)
	cout<<"Y"<<endl;
      else
	cout<<"N"<<endl;
    }
    cin>>i;
                 
                 
  }
}


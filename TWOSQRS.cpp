#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n,d;
  unsigned long long  int i;
  bool flag;
  double l,p,j,k;
  cin>>n;
  while(n--){
    flag=0;
    cin>>i;
    j=sqrt((double)i);
    j=(int)j;
    k=sqrt(((double)i)/2.0)-1;
    k=(int)k;
    for(;k*k<=i;k++){
      p=sqrt((double)(i-k*k));
      d=(int)p;
                                 
      if(d == p){
	flag=1;
	break;
      }
                                 
    }
    if(flag)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
               
               
  }
}


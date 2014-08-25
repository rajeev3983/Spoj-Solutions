#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a[10],i;
  for(i=0;i<10;i++){
    cin>>a[i];
  }
  int sum=0;
  int m=100;
  for(i=0;i<10;i++){
    sum+=a[i];
    if(m>=fabs(sum-100)){
      m=fabs(sum-100);
    }
    else{
      sum-=a[i];
      break;
    }
  }
  cout<<sum<<endl;
}




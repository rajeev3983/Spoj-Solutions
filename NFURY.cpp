#include <iostream>
using namespace std;
int A[1001];
int main(){
  int i,j,t;
  A[1]=1;
  A[0]=0;
  for(i=2;i<1001;i++){
    A[i]=10000;
    for(j=1;j*j<=i;j++){
      A[i]=min(A[i],1+A[i-j*j]);
    }
  }
  cin>>t;
  while(t--){
    cin>>i;
    cout<<A[i]<<endl;
  }
}


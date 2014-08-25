#include <iostream>
using namespace std;
int main(){
  int t,n,i,j,k,a,b;
  cin>>t;
  while(t--){
    cin>>n;
    i=1;
    if(n==1){
      cout<<"TERM 1 IS 1/1"<<endl;
      continue;
    }
    while(i*(i+1)/2<n){
      i++;
    }
    //i--;
    i--;
    k=i*(i+1)/2;
    j=n-k;
    if(i%2==1){
      a=j;
      b=i+2-j;
    }
    else{
      b=j;
      a=i+2-j;
    }
    cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
  }
}


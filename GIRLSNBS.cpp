#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int m,n,result;
  cin>>m>>n;
  while(m!=-1 && n!=-1){
    if (n>m)
      swap(m,n);
    result= ceil((1.0*m/(n+1)));
    cout<<result<<endl;
    cin>>m>>n;
  }
}


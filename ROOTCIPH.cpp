#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  long long int  a,b,c,t;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld%lld",&a,&b,&c);
    cout<<(a*a)-2*b<<endl;
  }
}


#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
  int t;
  double a,b,c,d;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    a=1/a;
    b=1/b;
    c=1/c;
    d=(a+b+c+2*sqrt(a*b+b*c+c*a));
    printf("%.6f\n",1/d);
  }
}


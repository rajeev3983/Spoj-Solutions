#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n;
  double a,b,c,d,area,s;
  cin>>n;
  while(n--){
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/2;
    area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    printf("%0.2lf\n",area);
               
  }
  return 0;
}


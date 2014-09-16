#include <iostream>
#include <cmath>
using namespace std;
long long gcd( long long  a, long long b ){
  if( b == 0)
    return a;
  return gcd(b,a%b);
}

int main(){
  long long t,i,j,k;
  float d;
  bool flag;
  string s;
  cin>>t;
  while(t--){
    i = 0;
    k = 0;
    cin>>s;
    flag = false;
    for(j=0;s[j]!='\0';j++){
      if(s[j]=='.')
	flag=true;
      else{
	i = i*10 + s[j]-'0';
	if( flag )
	  k++;
      }
    }
    j = pow(10,k);
    k = gcd(i,j);
    cout<<j/k<<endl;
  }
}

#include <iostream>
#define ull unsigned long long int
using namespace std;

ull gcd( ull a, ull b){
  if ( b == 0 )
    return a;
  return gcd( b, a%b );
}

int main(){
  ull i,j,k,l;
  cin>>i>>j;
  while( i!=0 && j!= 0 ){
    l = (i*j)/gcd(i,j);
    cout<< (l/i)*(l/j)<<endl;
    cin>>i>>j;
  }
}

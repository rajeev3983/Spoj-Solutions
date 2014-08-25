#include <iostream>
using namespace std;
int main(){
  int i;
  unsigned long long int j,k,l;
  unsigned long long int n,a;
  long long int d;
  cin>>i;
  while(i>0){
    i--;
    cin>>j>>k>>l;
    n=(2*l)/(j+k);
    d=(k-j)/(n-5);
    a=j-2*d;
    cout<<n<<endl;
    cout<<a;
    a+=d;
    for(unsigned long long int u=0;u<n-1;u++){
      cout<<" "<<a;
      a+=d;
    }
    cout<<endl;
               
  }
}


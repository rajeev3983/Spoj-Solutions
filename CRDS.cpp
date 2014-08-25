#include <iostream>
using namespace std;
int main(){
  unsigned long long int i;
  unsigned long long int k;
  int j;
  cin>>j;
  while( j>0){
    j--;
    cin>>k;
    i=((3*k*k+k)/2)%1000007;
    cout<<i<<endl;
  } 
}


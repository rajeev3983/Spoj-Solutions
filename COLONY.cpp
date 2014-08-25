#include <iostream>
using namespace std;
bool fun(int n,long long int l){
  if(n==0)
    return true;
  if(l%2==1)
    return fun(n-1,l/2);
  return !fun(n-1,l/2);
}

int main(){
  int n;
  cin>>n;
  long long int l;
  cin>>l;
  if(fun(n,l))
    cout<<"red"<<endl;
  else
    cout<<"blue"<<endl;
}


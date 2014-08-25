#include <iostream>
#include <algorithm>
using namespace std;
bool fun(int a[],int n){
  int i;
  sort(a,a+n);
  a[n]=2*(1422-a[n-1]);
  if (a[n]>200)
    return false;
  for(i=0;i<n-1;i++){
    if((a[i+1]-a[i])>200){
      return false;
    }
  }
  
  return true;
}
int main(){
  int a[2000],n,i;
  cin>>n;
  while(n!=0){
    for(i=0;i<n;i++)
      cin>>a[i];
    if(fun(a,n))
      cout<<"POSSIBLE"<<endl;
    else
      cout<<"IMPOSSIBLE"<<endl;
    cin>>n;
  }
}


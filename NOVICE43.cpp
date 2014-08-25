#include <iostream>
using namespace std;
int count;
void fun(int used,int l,int n){
  int i;
  if(l==n){
    count++;
    return;
  }
  for(i=0;i<used;i++)
    fun(used,l+1,n);
  fun(used+1,l+1,n);
  
  
}
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    count=0;
    fun(1,1,n);
    cout<<count<<endl;
  }
}


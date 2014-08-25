#include <iostream>
using namespace std;
bool check(int a[], int t){
  for(int i=1;i<=t;i++){
    if(a[a[i]]!=i)
      return false;
  }
  return true;
}
int main(){
  int t,i,a[100001];
  cin>>t;
  a[0]=0;
  while(t!=0){
    for(i=1;i<=t;i++){
      cin>>a[i];
    }
    if(check(a,t))
      cout<<"ambiguous"<<endl;
    else
      cout<<"not ambiguous"<<endl;
    cin>>t;
    
  }
}


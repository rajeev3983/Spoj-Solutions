#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int t,n,i,A[10002],a,b,c,diff;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>a>>b>>c;
    for(i=0;i<n;i++){
      A[i]=(a*(i+1)+b)%c;
      
    }
    sort(A,A+n);
    diff=A[0];
    bool temp=true;
    for(i=n-1;i>0;i--){
      if(temp){
	diff+=A[i];
	temp=false;
      }
      else{
	diff-=A[i];
	temp+=true;
      }
    }
    cout<<diff<<endl;
  }
}


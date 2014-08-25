#include <iostream>
using namespace std;
int A[1000];
int B[1000];
int main(){
  int t,n,i,j,k;
  bool b;
  cin>>t;
  while(t--){
    cin>>n;
    j=0;
    k=0;
    for(i=0;i<n;i++){
      cin>>A[i];
      if(A[i]>j){
	j=A[i];
	k=i;
      }
      cin>>B[i];
    }
    b=true;
    for(i=0;i<n;i++){
      if(B[i]>=j && i!=k){
	b=false;
	break;
      }
    }
    if(b)
      cout<<k+1<<endl;
    else
      cout<<-1<<endl;
  }
}

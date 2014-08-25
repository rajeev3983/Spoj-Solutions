#include <iostream>
#include <algorithm>
#define ull unsigned long long int
using namespace std;
bool search1(ull *A, ull start, ull end, ull sum){
  int i,j,k;
  i=start;
  j=end;
  while(i<j){
    if(A[i]+A[j]<sum)
      i++;
    else if(A[i]+A[j]>sum)
      j--;
    else
      return true;
  }
  return false;
}

int main(){
  ull i,*A,j,k,t,n,p;
  bool found;
  cin>>t;
  while(t--){
    cin>>n;
    A = new ull[n];
    for(i=0;i<n;i++)
      cin>>A[i];
    cin>>p;
    sort(A,A+n);
    found = false;
    for(i=0;i<n-2;i++){
      if(search1(A,i+1,n-1,p-A[i])){
	found = true;
	break;
      }
    }
    if(found)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}


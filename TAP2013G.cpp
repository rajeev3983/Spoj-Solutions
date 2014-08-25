#include <iostream>
#include <algorithm>
using namespace std;
int A[100000];
int B[100000];
int main(){
  int i,j,k,n;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>A[i];
  for(i=0;i<n;i++)
    cin>>B[i];
  sort(A,A+n);
  sort(B,B+n);
  i=0;
  j=0;
  k=0;
  while(j<n){
    if(A[i]<B[j]){
      k++;
      i++;
      j++;
    }
    else{
      j++;
    }
  }
  cout<<k<<endl;
}


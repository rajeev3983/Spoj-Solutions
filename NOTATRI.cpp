#include <iostream>
#include <algorithm>
using namespace std;

int search1(int *A, int sum, int start, int end ){
  int i,mid;
  if( start == end ){
    if( A[start]<=sum )
      return start+1;
    return start;
  }
  mid = (start+end)/2;
  if( A[mid]<=sum )
    return search1(A,sum,mid+1,end);
  return search1(A,sum,start,mid);
}

int main(){
  int cases,i,j,k,n,*A;
  cin>>n;
  while(n!=0){
    A = new int[n];
    for(i=0;i<n;i++)
      cin>>A[i];
    sort(A,A+n);
    k=0;
    for(i=0;i<n-2;i++){
      for(j=i+1;j<n-1;j++){
	k+=n-search1(A,A[i]+A[j],j+1,n-1);
      }
    }
    cout<<k<<endl;
    cin>>n;
  }
}


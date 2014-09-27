#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std; 
int A[1000000];

bool fun( int d, int n, int c){
  int i,j,k;
  k = 1;
  j = A[0];
  i =1;
  while(i<n){
    while(i<n && A[i]-j <d )
      i++;
    if(i<n && A[i]-j>=d){
      k++;
      j=A[i];
      i++;
    }
  }
  if( k<c )
    return false;
  return true;
}


int  binary(int start, int end , int n, int c){
  if( start==end ){
    if(fun(start,n,c))
      return start;
    return start-1;
  }
  int mid = (start+end)/2;
  if( fun(mid,n,c))
    return binary(mid+1,end,n,c);
  return binary(start,mid,n,c);
}


int main(){
  int t,n,c,i,j,k;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&c);
    for(i=0;i<n;i++)
      scanf("%d",A+i);
    sort(A,A+n);
    cout<<binary(0,2000000000,n,c)<<endl;
  }
}

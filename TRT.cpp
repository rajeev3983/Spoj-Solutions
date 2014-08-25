#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int m[2000][2000];
unsigned long long int find(int a[],int start,int end,int age){
  unsigned long long int  b,c;
  if( m[start][end]==0){
    
    if(start==end){
      return age*a[start];
    }
    b=age*a[start]+find(a,start+1,end,age+1);
    c=age*a[end]+find(a,start,end-1,age+1);
    m[start][end]=max(b,c);
  }
  return m[start][end];
}

int main(){
  int a[2000],i,j,n;
  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<find(a,0,n-1,1)<<endl;
}


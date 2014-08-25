#include <iostream>
using namespace std;
int a[100][100];
int c[100][100];
int main(){
  int i,j,k,m,n;
  cin>>n>>m;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)
      cin>>a[i][j];
  }
  for(i=0;i<m;i++)
    c[n-1][i]=a[n-1][i];
  for(i=n-2;i>=0;i--){
    c[i][0]=a[i][0]+min(c[i+1][0],c[i+1][1]);
    c[i][m-1]=a[i][m-1]+min(c[i+1][m-1],c[i+1][m-2]);
    for(j=1;j<m-1;j++){
      c[i][j]=a[i][j]+min(c[i+1][j-1],min(c[i+1][j],c[i+1][j+1]));
    }
  }
  k=10000000;
  for(i=0;i<m;i++){
    k=min(k,c[0][i]);
  }
  cout<<k<<endl;
}



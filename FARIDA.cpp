#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
  int t;
  long long int a[10000],n,j,m[10001],i;
  cin>>t;
  j=1;
  while(j<=t){
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];
    m[0]=0;
    m[1]=a[0];
    for(i=1;i<n;i++){
      m[i+1]=max(m[i],m[i-1]+a[i]);
    }
    cout<<"Case "<<j<<": "<<m[n]<<endl;
    j++;
  }
}


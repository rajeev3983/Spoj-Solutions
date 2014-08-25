#include <iostream>
using namespace std;
int main(){
  int t,i,j,k,a[200],b[200],m,n,s,c,temp1;
  cin>>t;
  while(t--){
    cin>>s>>c;
    for(i=0;i<s;i++){
      cin>>a[i];
    }
    j=0;
    k=s;
    while(k!=1){
      b[j]=a[0];
      j++;
      
      for(i=0;i<k-1;i++){
	a[i]=a[i+1]-a[i];
	
      }
      k--;
    }
    for(i=1;i<c+1;i++){
      a[i]=a[0];
    }
    n=1;
    for(k=j-1;k>=0;k--){
      m=b[k];
      
      for(i=0;i<=n+c;i++){
	temp1=a[i];
	a[i]=m;
	m=a[i]+temp1;
      }
      n++;
    }
    for(i=s;i<s+c;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }
}


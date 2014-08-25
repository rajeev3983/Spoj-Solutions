#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int t,a[3],k;
  string s;
  cin>>t;
  //cin>>s;
  a[0]=a[1]=a[2]=0;
  while(t--){
    cin>>s;
    //cout<<s<<endl;
    if(s[2]=='2')
      a[1]++;
    else if (s[0]=='1')
      a[0]++;
    else 
      a[2]++;
  }
  //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
  k=1;
  k+=a[1]/2;
  a[1]=a[1]%2;
  k+=a[2];
  a[0]=a[0]-a[2];
  if(a[0]<0)
    a[0]=0;
  if(a[1]==0){
    k+=a[0]/4;
    a[0]=a[0]%4;
    if(a[0]>0)
      k++;
  }
  else{
    if(a[0]<=2)
      k++;
    else{
      k++;
      a[0]-=2;
      k+=a[0]/4;
      a[0]=a[0]%4;
      if(a[0]>0)
	k++;
      
    }
    
  }
  cout<<k<<endl;
  
}


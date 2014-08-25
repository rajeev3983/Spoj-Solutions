#include <iostream>
#define ll long long
#define mod 1000000000
using namespace std;
int k;
class node{
public:
  ll m[10][10];
  
  node(){}
  
  node multiply(){
    node temp;
    for(int i=0;i<k;i++){
      for(int j=0;j<k;j++){
	temp.m[i][j]=0;
	for(int t=0;t<k;t++)
	  temp.m[i][j]+=(m[i][t]*m[t][j])%mod;
	temp.m[i][j]%=mod;
      }
    }
    return temp;
  }
  
  node multiply(node temp2){
    node temp;
    for(int i=0;i<k;i++){
      for(int j=0;j<k;j++){
	temp.m[i][j]=0;
	for(int t=0;t<k;t++)
	  temp.m[i][j]+=(temp2.m[i][t]*m[t][j])%mod;
	temp.m[i][j]%=mod;
      }
    }
    return temp;
  }
};

node pw(node temp,int n){
  if(n==1)
    return temp;
  if(n%2==0){
    return pw(temp,n/2).multiply();
  }
  return pw(temp,n/2).multiply().multiply(temp);
}

int main(){
  node temp;
  ll a[10],ans;
  int i,j,t,n;
  for(i=1;i<10;i++){
    for(j=0;j<10;j++)
      temp.m[i][j]=0;
  }
  for(i=1;i<10;i++){
    temp.m[i][i-1]=1;
  }
  cin>>t;
  while(t--){
    cin>>k;
    for(i=0;i<k;i++)
      cin>>a[i];
    
    for(i=0;i<k;i++)
      cin>>temp.m[0][i];

    cin>>n;
    if(n<=k){
      cout<<a[n-1]<<endl;
      continue;
    }
    node temp2=pw(temp,n-k);
    ans=0;
    for(i=0;i<k;i++){
      ans+=(temp2.m[0][i]*a[k-1-i])%mod;
      ans%=mod;
    }
    cout<<ans<<endl;
  }
}



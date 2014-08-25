#include <iostream>
using namespace std;
int main(){
  int i,j,n,t,s,l;
  int e[2][6101];
  string s1,s2;
  cin>>t;
  while(t--){
    cin>>s1;
    n=s1.length();
    s2="";
    for(i=n-1;i>=0;i--){
      s2+=s1[i];
    }
    e[0][0]=0;
    e[1][0]=0;
    for(i=1;i<=n;i++){
      e[0][i]=0;
    }
    s=0;
    l=1;
    for(i=1;i<=n;i++){
      s=(l+1)%2;
      for(j=1;j<=n;j++){
	if (s1[i-1] == s2[j-1])
	  e[l][j] = e[s][j-1] + 1;
	else
	  e[l][j]=max(e[l][j-1],e[s][j]);
      }
      l=s;
    }
    cout<<n-e[(l+1)%2][n]<<endl;
  }
}



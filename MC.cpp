#include <iostream>
using namespace std;
int main(){
  int i,j,n,s,l,m;
  int e[2][6101];
  string s1,s2;
  cin>>s1;
  while(s1!="#"){
    cin>>s2;
    n=s1.length();
    m=s2.length();
    e[0][0]=0;
    e[1][0]=0;
    for(i=1;i<=max(m,n);i++){
      e[0][i]=0;
    }
    s=0;
    l=1;
    for(i=1;i<=n;i++){
      s=(l+1)%2;
      for(j=1;j<=m;j++){
	if (s1[i-1] == s2[j-1])
	  e[l][j] = e[s][j-1] + 1;
	else
	  e[l][j]=max(e[l][j-1],e[s][j]);
      }
      l=s;
    }
    int p=e[(l+1)%2][m];
    
    cout<<15*(n-p)+30*(m-p)<<endl;
    cin>>s1;
  }
}

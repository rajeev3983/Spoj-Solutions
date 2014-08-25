#include <iostream>
using namespace std;
int main(){
  int i,j,n,t,m,e[2][2001],d,s,l;
  string s1,s2;
  cin>>t;
  while(t--){
    cin>>s1;
    //cout<<s1<<endl;
    cin>>s2;
    //cout<<s2<<endl;
    
    m=s1.length();
    n=s2.length();
    
    e[0][0]=0;
    for(i=1;i<=n;i++){
      e[0][i]=i;
    }
    
    s=0;
    for(i=1;i<=m;i++){
      
      l=(s+1)%2;
      e[l][0]=i;
      for(j=1;j<=n;j++){
	//cout<<"r"<<endl;
	if(s1[i-1]==s2[j-1])
	  d=0;
	else
	  d=1;
	e[l][j]=min(min(e[s][j]+1,e[l][j-1]+1),e[s][j-1]+d);
      }
      s=l;
    }
    cout<<e[l][n]<<endl;
  }
}


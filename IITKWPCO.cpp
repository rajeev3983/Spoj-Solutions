#include <iostream>
#include <map>
using namespace std;
int main(){
  int t,n,i,j,c;
  cin>>t;
  while(t--){
    cin>>n;
    map<int,int> m;
    for(i=0;i<n;i++){
      cin>>j;
      if(!m[j])
	m[j]=1;
      else
	m[j]+=1;
    }
    c=0;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
      while(m[it->first]!=0 && m[2*it->first]!=0){
	m[it->first]--;
	m[2*it->first]--;
	c++;
      }
    }
    cout<<c<<endl;
  }  
}


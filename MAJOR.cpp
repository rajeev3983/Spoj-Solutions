#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int main(){
  int t,n;
  scanf("%d",&t);
  int s,k;
  while(t--){
    map<int,int> m;
    scanf("%d",&n);
    k=n;
    while(k--){
      scanf("%d",&s);
      //cout<<s<<endl;
      m[s]++;
    }
    bool b=false;
    int ans;
    for(map<int,int>::iterator it = m.begin(); it != m.end(); ++it) {
      if (it->second > n/2){
	
	b=true;
	ans=it->first;
	break;
      }
      
    }
    if(b){
      cout<<"YES "<<ans<<endl;
    }
    else
      cout<<"NO"<<endl;
    m.clear();

  }
}


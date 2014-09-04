#include <iostream>
#include <map>
#define lld long long int
using namespace std;
int main(){
  lld t,i,j,k,n,c;
  cin>>t;
  while(t--){
    cin>>n;
    map<lld,lld> m;
    m[0]=1;
    k = 0;
    for(i=0;i<n;i++){
      cin>>j;
      k+=j;
      m[k]++;
    }
    c = 0;
    for(map<lld,lld> :: iterator it=m.begin();it!=m.end();++it){
      if( it->second>1){
	j = it->second;
	c += j*(j-1)/2;
      }
    }
    cout<<c<<endl;
  }
}

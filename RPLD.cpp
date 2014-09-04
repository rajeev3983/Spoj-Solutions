#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
  int t,i,j,c,k,n,r,flag;
  cin>>t;
  c = t;
  while(t--){
    cin>>r>>n;
    flag = 1;
    set<int> *A= new set<int>[r];
    for(i=0;i<n;i++){
      cin>>j>>k;
      if(flag && A[j-1].find(k)!=A[j-1].end())
	flag = 0;
      else if(flag)
	A[j-1].insert(k);
    }
    if(flag)
      cout<<"Scenario #"<<c-t<<": "<<"possible"<<endl;
    else
      cout<<"Scenario #"<<c-t<<": "<<"impossible"<<endl;
  }
}

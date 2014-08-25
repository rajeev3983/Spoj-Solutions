#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int main(){
  int t,n,i;
  scanf("%d",&t);
  int k;
  i=0;
  map<int,bool> m;
  map<int,bool> m2;
  while(t--){
    cin>>k;
    m[k]=true;
    cin>>n;
    while(n--){
      cin>>i;
      m2[i]=true;
    }
  }
  int f=0;
  for(map<int,bool>::iterator it=m2.begin();it!=m2.end();++it){
    if(!m[it->first])
      f++;
  }  
  cout<<f<<endl;
}


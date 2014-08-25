#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
  int i,j,k,a1;
  set<int> s;
  j=1;
  a1=0;
  s.insert(a1);
  vector<int> v;
  v.push_back(0);
  while(j<500000){
    k=a1 -j;
    
    if(k>0 && s.find(k)==s.end()){
      s.insert(k);
    }
    else{
      k=a1+j;
      s.insert(k);
    }
    j++;
    a1=k;
    v.push_back(k);
  }
  cin>>i;
  while(i!=-1){
    cout<<v[i]<<endl;
    cin>>i;
  }
}


#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
  int *a,i,j,k,n;
  cin>>n;
  a = new int[n];
  for( i = 0;i<n;i++)
    cin>>a[i];
  cin>>k;
  set<int> s;
  set<int> :: reverse_iterator it;
  map<int,int> m;
  for( i =0;i<k;i++){
    s.insert(a[i]);
    m[a[i]]=i;
  }
  it = s.rbegin();
  cout<<*it<<" ";
  for(;i<n;i++){
    if(m[a[i-k]]<=i-k)
      s.erase(a[i-k]);
    s.insert(a[i]);
    m[a[i]]=i;
    it = s.rbegin();
    cout<<*it<<" ";
  }
  cout<<endl;
}


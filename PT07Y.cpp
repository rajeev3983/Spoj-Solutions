#include <iostream>
#include <list>
using namespace std;
class node{
public:
  bool visited;
  list<int> l;
  node(){
    visited=false;
  }
};

node *a;
int count;
void DFS(int i){
  int c;
  count++;
  a[i].visited=true;
  for(list<int> ::iterator it=a[i].l.begin();it!=a[i].l.end();it++){
    c=*it;
    if(!a[c].visited)
      DFS(c);
    
  }

}

int main(){
  int n,m,i,j,t;
  cin>>n>>m;
  count=0;
  if(m!=n-1){
    cout<<"NO"<<endl;
    return 0;
  }
  a= new node[n];
  for(i=0;i<m;i++){
    cin>>j>>t;
    a[j-1].l.push_back(t-1);
    a[t-1].l.push_back(j-1);
  }
  DFS(0);
  if(count==n)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  

}


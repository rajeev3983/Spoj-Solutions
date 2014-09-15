#include <iostream>
#include <algorithm>
using namespace std;

class node{
public:
  int val;
  int pos;
};

bool cmp( node a, node b ){
  return a.val< b.val;
}

int main(){
  int t,i,j,k,n;
  cin>>n;
  node *a = new node[n];
  for(i=0;i<n;i++){
    cin>>a[i].val;
    a[i].pos = i;
  } 
  sort(a,a+n,cmp);
  for(i=n-2;i>=0;i--){
    if(a[i].pos>a[i+1].pos)
      break;
  }
  cout<<i+1<<endl;
}

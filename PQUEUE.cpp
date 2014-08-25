#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
class node{
public:
  int value;
  bool b;
};
class compare {
public:
  bool operator()(const node x,const node y) { return (x.value-y.value)>0; }
};

int main(){
  int t,n,k,f,a,i;
  
  node *temp;
  cin>>t;
  while(t--){
    queue<node> q;
    cin>>n>>k;
    f=0;
    vector<node> v;
    while(f<n){
      cin>>a;
      temp= new node();
      temp->value=a;
      if(f==k)
	temp->b=true;
      else
	temp->b=false;
      f++;
      v.push_back(*temp);
      
      q.push(*temp);
    }
    sort(v.begin(),v.end(),compare());
    i=0;
    f=0;
    while(1){
      if(v[i].value>q.front().value){
	temp= new node();
	temp->value=q.front().value;
	temp->b=q.front().b;
	q.pop();
	q.push(*temp);
      }
      else if(v[i].value==q.front().value){
	i++;
	f++;
	if(q.front().b){
	  cout<<f<<endl;
	  break;
	  
	}
	q.pop();
      }
      
    }
    
  }
  
}


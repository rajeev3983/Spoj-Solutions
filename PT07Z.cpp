#include <iostream>
#include <vector>
using namespace std;
class node{
public:
  vector<int> v;
  int visited;
};
node *A;
void dfs(int index, int &lChild,int &lDepth){
  A[index].visited = 1;
  int i,j,k,maxL,maxR,maxC,s;
  maxL=-1;
  maxR=-1;
  maxC=0;
  for(s=0;s<A[index].v.size();s++){
    k=A[index].v[s];
    if(A[k].visited==0){
      dfs(k,i,j);
      if(j>=maxL){
	maxR = maxL;
	maxL=j;
      }
      else if( j> maxR)
	maxR = j;
      if(i>maxC)
	maxC=i;
    }
  }
  lChild=max(maxC,maxL+maxR+2);
  lDepth=maxL+1;
}
int main(){
  int n,i,j,k;
  cin>>n;
  A = new node[n];
  for(i=0;i<n-1;i++){
    cin>>j>>k;
    A[j-1].v.push_back(k-1);
    A[k-1].v.push_back(j-1);
  }
  dfs(0,i,j);
  cout<<max(i,j)<<endl;
}


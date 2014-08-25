#include <iostream>
#include <algorithm>
using namespace std;
class edge{
public:
  int left;
  int right;
  int cost;
};

bool smaller(edge a, edge b){
  return a.cost<b.cost;
}

int find1( int *parent, int k ){
  if( k == parent[k])
    return k;
  return find1(parent,parent[k]);
}

int main(){
  int m,n,*parent,*rank,ne,p1,p2,i,cost,total;
  edge *edgeList;
  cin>>m>>n;
  while(m!=0){
    parent = new int[m];
    rank = new int[m];
    edgeList = new edge[n];
    for(i=0;i<m;i++){
      parent[i]=i;
      rank[i]=0;
    }
    total =0;
    for(i=0;i<n;i++){
      cin>>edgeList[i].left>>edgeList[i].right>>edgeList[i].cost;
      total+=edgeList[i].cost;
    }
    sort(edgeList,edgeList+n,smaller);
    ne=0;
    cost =0;
    for(i=0;i<n;i++){
      p1 = find1(parent,edgeList[i].left);
      p2 = find1(parent,edgeList[i].right);
      if( p1!=p2){
	cost+=edgeList[i].cost;
	if( rank[p1]>rank[p2] )
	  parent[p2]=p1;
	else if( rank[p2]>rank[p1] )
	  parent[p1]=p2;
	else{
	  parent[p2]=p1;
	  rank[p1]++;
	}
	ne++;
	if(ne==m-1)
	  break;
      }
    }
    cout<<total-cost<<endl;
    cin>>m>>n;
  }
}



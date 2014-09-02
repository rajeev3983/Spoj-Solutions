#include <iostream>
#include <vector>
#include <cstdlib>
#include <string.h>
#include <map>
#include <set>
#include <stdio.h>
using namespace std;

pair<int,int> edges[20000];
char removed[20000];
int parent[20000];
int rank[20000];
int numVertices[20000];
int Answer[20000];
int Parent(int i){
  if( i==parent[i])
    return i;
  return Parent(parent[i]);
}

int Union(int i, int j){
  int p1,p2,k1,k2;
  p1 = Parent(i);
  p2 = Parent(j);
  k1 = numVertices[p1];
  k2 = numVertices[p2];
  if( rank[p1]>rank[p2]){
    parent[p2]=p1;
    numVertices[p1]+=numVertices[p2];
  }	
  else if( rank[p2]>rank[p1] ){
    parent[p1]=p2;
    numVertices[p2]+=numVertices[p1];
  }
  else{
    parent[p1]=p2;
    numVertices[p2]+=numVertices[p1];
    rank[p2]++;
  }
  return k1*k2;
}

int main(){
  int t,i,j,n,k,numQueries,p1,p2,as;
  char s;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    vector<int> queries;
    memset(removed,0,sizeof(char)*n);
    for(i=0;i<n-1;i++){
      scanf("%d%d",&j,&k);
      edges[i].first = j-1;
      edges[i].second = k-1;
    }
    scanf("%d",&numQueries);
    for(i=0;i<numQueries;i++){
      cin>>s;
      if(s=='Q')
	queries.push_back(-1);
      else{
	scanf("%d",&j);
	removed[j-1]=1;
	queries.push_back(j-1);
      }
    }
    for(i=0;i<n;i++){
      rank[i]=1;
      parent[i]=i;
      numVertices[i]=1;
    }
    as = (n*(n-1))/2;
    for(i=0;i<n-1;i++){
      if(removed[i]!=1)
    	as-=Union(edges[i].first,edges[i].second);
    }
    int in=0;
    for(i=numQueries-1;i>=0;i--){
      if(queries[i]==-1)
	Answer[in++]=as;
      else{
	j = queries[i];
	as-=Union(edges[j].first,edges[j].second);
      }
    }
    for(i=in-1;i>=0;i--)
      printf("%d\n",Answer[i]);
    printf("\n");
  }
}

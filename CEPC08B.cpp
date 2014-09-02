#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#define N 1000000
using namespace std;
class node{
public:
  int h;
  int add;
  node(int i, int j){
    h = i;
    add = j;
  }
};

bool cmp( node a, node b){
  return a.h<b.h;
}

void readInt(int *number){
  int sign = 1;
  char c;
  int found = 0;
  int n = 0;
    
  while(1){
    c = getc(stdin);
    
    switch(c){
    case '-' :
      sign = -1;
      found = 1;
      break;
    case ' ':
      if(found) goto jump;
      break;
    case '\n':
      if(found) goto jump;
      break;
    default:
      if(c>='0' && c<='9'){
	n = n*10+c-'0';
	found = 1;
      }else goto jump;
      break;
    }
  }
    
 jump:
  n *= sign;
  *number=n;
}

int A[N];
int main(){
  int t,i,n,ti,d,j,k,ans;
  readInt(&t);
  while(t--){
    readInt(&k);
    readInt(&d);
    vector<node> v;
    readInt(A);
    n = 1;
    for(i=1;i<k;i++){
      readInt(&j);
      if(j!=A[n-1])
	A[n++]=j;
    }
    if( n > 1 && A[0]>A[1] )
      v.push_back(node(A[0],-1 ));
    else if (n==1)
      v.push_back(node(A[0],-1));
    for(i=1;i<n-1;i++){
      if( A[i]< A[i-1] && A[i]<A[i+1])
	v.push_back(node(A[i],1));
      else if( A[i]>A[i-1] && A[i]>A[i+1] )
	v.push_back(node(A[i],-1));
    }
    if( n>=2 && A[n-1]>A[n-2] )
      v.push_back(node(A[n-1],-1));
    sort(v.begin(),v.end(),cmp);
    k = 0;
    ans = 1;
    i = 0;
    for(j=0;j<d;j++){
      readInt(&ti);
      for(;i<v.size()&& v[i].h<=ti;i++)
	ans+=v[i].add;
      printf("%d ",ans);
    }
    printf("\n");
  }
}

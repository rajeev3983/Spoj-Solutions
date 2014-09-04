#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
  int t,i,j,k;
  char s[120002];
  scanf("%d",&t);
  for(i=0;i<t;i++){
    vector<int> v;
    printf("Case %d: ",i+1);
    scanf("%s",s);
    j = 0;
    while( s[j]!='\0' ){
      v.push_back(s[j]-'0');
      k = v.size();
      if( k >=3 ){
	if(v[k-1]==0 && v[k-2]==0 && v[k-3]==1 ){
	  v.erase(v.begin()+k-1);
	  v.erase(v.begin()+k-2);
	  v.erase(v.begin()+k-3);
	}
      }
      j++;
    }
    if( v.size()==0 )
      printf("yes\n");
    else
      printf("no\n");
  }
  return 0;
}

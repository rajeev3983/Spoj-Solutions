#include <stdio.h>
int A[100001];

void check( int n ){
  int i;
  for(i=0;i<n;i++){
    if( A[i]>i ){
      printf("NO\n");
      return;
    }   
  }
  printf("YES\n");
  return ;
}
int main(){
  int i,j,n,t;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",A+i);
    check(n);
  }
  return 0;
}

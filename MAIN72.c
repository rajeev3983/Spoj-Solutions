#include <stdio.h>
#include <string.h>
char sum[100001];
char dp[100][100001];
int A[100];
int sm;

void fun( int start, int n, int s ){
  if( sum[s]==0 ){
    sum[s] = 1;
    sm +=s;
  }
  if( start == n )
    return;
  if( dp[start][s] )
    return;
  fun( start+1,n, s);
  fun( start+1,n,s+A[start] );
  dp[start][s]=1;
  return;
}

int main(){
  int t,i,j,n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",A+i);
    memset(sum,0,sizeof(sum));
    for(i=0;i<n;i++)
      memset(dp[i],0,sizeof(dp[i]));
    sm = 0;
    fun(0,n,0);
    printf("%d\n",sm);
  }
  return 0;
}

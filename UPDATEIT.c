#include <stdio.h>
long long a[10001];
long long a2[10001];
int main(){
  int t,i,j,k,n,u,q,l,r;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&u);
    for(i=0;i<n+1;i++)
      a[i]=0;
    for(i=0;i<u;i++){
      scanf("%d%d%d",&l,&r,&k);
      a[l]+=k;
      a[r+1]-=k;
    }
    a2[0]=0;
    for(i=1;i<=n+1;i++){
      a2[i]=a2[i-1]+a[i-1];
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
      scanf("%d",&j);
      printf("%lld\n",a2[j+1]);
    }
  }
  return 0;
}




#include <stdio.h>
#include <math.h>
int A[10000];
int main(){
  int t,i,j,k,n,moves;
  scanf("%d",&n);
  while(n!=-1){
    k = 0;
    for(i=0;i<n;i++){
      scanf("%d",A+i);
      k+=A[i];
    }
    if(k%n!=0){
      printf("%d\n",-1);
      scanf("%d",&n);
      continue;
    }
    j = k/n;
    moves=0;
    for(i=0;i<n;i++)
      moves+=fabs(A[i]-j);
    printf("%d\n",moves/2);
    scanf("%d",&n);
  }
  return 0;
}

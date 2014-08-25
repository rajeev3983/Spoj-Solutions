#include <stdio.h>
#include <stdlib.h>
int main(){
  int A[32],i,j,k,n,*B,sum;
  A[0]=0;
  A[1]=1;
  for(i=2;i<32;i++)
    A[i]=2*A[i-1];
  scanf("%d",&n);
  while(n!=0){
    B = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
      scanf("%d",B+i);
    i=0;
    while(A[i]-1<n)
      i++;
    i--;
    k = n-(A[i]-1);
    k+=(A[i-1]-(k+1)/2);
    sum =0;
    for(i=n-1;i>n-1-k;i--)
      sum+=B[i];
    if(n==1)
      printf("%d\n",B[0]);
    else
      printf("%d\n",sum);
    scanf("%d",&n);
  }
  return 0;
}


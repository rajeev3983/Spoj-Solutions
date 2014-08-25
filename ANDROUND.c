#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int low;
  int high;
  int nd;
  struct node *left;
  struct node *right;
}node;

int min( int a, int b){
  return a<b?a:b;
}

int max( int a, int b){
  return a>b?a:b;
}
node B[100000];
int *A;

int makeTree( int curr, int low , int high ){
  int i,j,mid;
  B[curr].low = low;
  B[curr].high = high;
  if( low == high ){
    B[curr].nd = A[low];
    return B[curr].nd;
  }
  mid = ( low + high )/2;
  B[curr].nd = makeTree( 2*curr+1,low,mid ) & makeTree(2*curr+2, mid + 1, high );
  return B[curr].nd;
}

int query(int curr, int low ,int high ){
  int mid;
  if( low > high )
    return -1;
  if ( B[curr].low == low && B[curr].high == high )
    return B[curr].nd;
  mid = ( B[curr].low + B[curr].high )/2;
  return query( 2*curr+1, low , min(mid, high)) & query( 2*curr+2 , max(mid+1,low), high );
}

int main(){
  int i,j,k,n,t;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&k);
    A = malloc(sizeof(int)*n);;
    for(i=0;i<n;i++)
      scanf("%d",A+i);
    makeTree(0,0,n-1);
    if ( k> n/2)
      k = n/2;
    for( i=0;i<n;i++){
      j=query(0,max(0,i-k),min(i+k,n-1));
      if( i-k<0){
	j &= query(0,n-k+i,n-1);
      }
      if( i+ k > n-1){
	j &= query(0,0,i+k-n);
      }
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}


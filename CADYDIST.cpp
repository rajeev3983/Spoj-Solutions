#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
unsigned long long int A[100000];
unsigned long long int B[100000];

int main(){
  int i,j,k,n;
  scanf("%d",&n);
  while(n!=0){
    for(i=0;i<n;i++)
      scanf("%llu",A+i);
    for(i=0;i<n;i++)
      scanf("%llu",B+i);
    sort(A,A+n);
    sort(B,B+n);
    unsigned long long cost = 0;
    for(i=0;i<n;i++)
      cost+=A[i]*B[n-1-i];
    printf("%llu\n",cost);
    scanf("%d",&n);
  }
}

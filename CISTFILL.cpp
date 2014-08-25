#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;

class node{
public:
  int base, height, area;
};

node A[50000];
void fun( node *A, double low , double high , int n, double v ){
  int i,j,k;
  double mid,volume;
  while( high- low > 1e-8 ){
    mid = ( low + high )/2;
    volume = 0;
    for(i=0;i<n;i++){
      if ( mid > A[i].base ){
	if( mid >= A[i].base + A[i].height )
	  volume += A[i].area*A[i].height;
	else
	  volume += (mid-A[i].base)*A[i].area;
      }
    }
    if ( volume < v )
      low = mid;
    else 
      high = mid;
  }
  printf("%.2f\n",low);
}
int main(){
  long long  t,d,i,j,k,n;
  double low,high;
  double volume,totalVolume;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    low = 100000000;
    high = -100000000;
    totalVolume =0;
    for(i=0;i<n;i++){
      scanf("%d%d%lld%lld",&A[i].base,&A[i].height,&j,&k);
      A[i].area = k*j;
      if( high < A[i].base + A[i].height ) 
	high = A[i].base + A[i].height;
      if ( low > A[i].base )
	low = A[i].base;
      totalVolume += A[i].height * A[i].area;
    }
    scanf("%lf",&volume);
    if( totalVolume < volume )
      cout<<"OVERFLOW"<<endl;
    else
      fun(A,low,high,n,volume);
  }
}


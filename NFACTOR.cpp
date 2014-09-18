#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define N 1000001
#define lld unsigned long long 
using namespace std;
vector<vector<int> > v;
unsigned int A[N/64];
int divisor[N];
int numDivisor[N];
int total;

int check(int i){
  int j = i/64;
  int k = (i%64)/2;
  return (A[j] & 1<<k)>>k;
}

void set(int i){
  int j = i/64;
  int k = (i%64)/2;
  A[j]=(A[j] | 1<<k);
}

void sieve(){
  int i,j,k,temp,c;
  A[0]=1;
  k =sqrt(N);
  for(i=3;i<=k;i+=2){
    if(!check(i)){
      for(j=i+2*i;j<=N;j+=2*i){
	divisor[j]=i;
	set(j);
      }
    }
  }
  numDivisor[1]=0;
  numDivisor[2]=1;
  v[1].push_back(2);
  for(i=3;i<N;i+=2){
    if(!check(i))
      numDivisor[i]=1;
    else{
      j = i;
      while( j%divisor[i]==0 ){
	j/=divisor[i];
      }
      numDivisor[i]=numDivisor[j]+1;
    }
    if(numDivisor[i]<11){
      v[numDivisor[i]].push_back(i);
    }

    j= i+1;
    while( j%2==0 ){
      j/=2;
    }
    numDivisor[i+1]=numDivisor[j]+1;
    v[numDivisor[i+1]].push_back(i+1);
  }
}

int bin(int c ,int start, int end, int key ){
  if( start>end )
    return 0;
  if( start == end ){
    if( v[c][start]>=key )
      return start-1;
    else
      return start;
  }
  int mid = ( start + end )/2;
  if( key<= v[c][mid] )
    return bin(c,start,mid,key);
  return bin(c,mid+1,end,key);
}

int bin2(int c ,int start, int end, int key ){
  if( start> end )
  return 0;
  if( start == end ){
    if( v[c][start]<=key )
      return start;
    else 
      return start-1;
  }
  int mid = ( start + end )/2;
  if( key<= v[c][mid] )
    return bin2(c,start,mid,key);
  return bin2(c,mid+1,end,key);
}

int main(){
  int i,j,k,count,n,c,a,b;
  for(i=0;i<20;i++){
    vector<int> v1;
    v.push_back(v1);
  }
  v[0].push_back(1);
  sieve();
  scanf("%d",&i);
  while(i--){
    scanf("%d%d%d",&a,&b,&n);
    cout<<bin2(n,0,(int)v[n].size()-1,b)-bin(n,0,(int)v[n].size()-1,a)<<endl;
  }
}

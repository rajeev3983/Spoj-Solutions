#include <iostream>
#include <vector>
#include <cmath>
#define siz 100000000
using namespace std;
#define sq(x) ((x)*(x))
#define i64 unsigned long long
#define MAX 90000000
#define LMT 10000

unsigned flag[MAX/64];


#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
int prime[9000000];
void sieve()
{
  unsigned i, j, k;
  flag[0]|=0;
  for(i=3;i<LMT;i+=2)
    if(!chkC(i))
      for(j=i*i,k=i<<1;j<MAX;j+=k)
	setC(j);
  prime[0]=2;
  j=1;
  //cout<<"dj"<<endl;
  for(i=3;i<MAX;i+=2)
    if(!chkC(i))
      prime[j++]=i;
  
}


int main(){
  int i,t;
  
  sieve();
  
  cin>>t;
  while(t--){
    cin>>i;
    cout<<prime[i-1]<<endl;
  }
}


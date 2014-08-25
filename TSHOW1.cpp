#include <iostream>
#define ull unsigned long long int
using namespace std;
int main(){
  ull tc,n,t,i,j,k,c,l;
  cin>>tc;
  while(tc--){
    c =4;
    cin>>n;
    l=2;
    while(c-2<n){
      c*=2;
      l++;
    }
    k =l -1;
    if ( k>1 )
      n-=(c/2-2);
    j=c/2;
    for(i=0;i<k;i++){
      if(n<=j/2)
	cout<<"5";
      else{
	n-=j/2;
	cout<<"6";
      }
      j/=2;
    }
    cout<<endl;
  }
}


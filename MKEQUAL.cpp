#include <iostream>
#define ull unsigned long long int
using namespace std;
int main(){
  int t,n,k,i;
  ull sum;
  cin>>t;
  while(t--){
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
      cin>>k;
      sum+=k;
    }
    if(sum%n==0)
      cout<<n<<endl;
    else
      cout<<n-1<<endl;
  }
}


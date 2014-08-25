#include <iostream>
#define lli long long int
using namespace std;
char a[100];
int main(){
  lli j;
  int t,i,p;
  cin>>t;
  while(t--){
    cin>>j;
    i=0;
    while(j!=0){
      p=j%5;
      if(p==1)
	a[i]='m';
      else if(p==2)
	a[i]='a';
      else if(p==3)
	a[i]='n';
      else if(p==4)
	a[i]='k';
      else
	a[i]='u';
      j=(j-1)/5;
      i++;
    }
    i--;
    for(;i>=0;i--)
      cout<<a[i];
    cout<<endl;
  }
}


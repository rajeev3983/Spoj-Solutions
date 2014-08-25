#include <iostream>
#define infi 1000000000
using namespace std;
int main(){
  int l,i,j;
  int a[3*100000];
  long long int c[3*100000];
  cin>>l;
  j=1;
  while(l){
    for(i=0;i<l;i++){
      cin>>a[3*i]>>a[3*i+1]>>a[3*i+2];
    }
    i=l-1;
    c[3*i]=a[3*i]+a[3*i+1];
    c[3*i+1]=a[3*i+1];
    c[3*i+2]=infi;
    for(i=l-2;i>=0;i--){
      c[3*i+2]=a[3*i+2]+min(c[3*(i+1)+1],c[3*(i+1)+2]);
      c[3*i+1]=a[3*i+1]+min(min(min(c[3*i+2],c[3*(i+1)+1]),c[3*(i+1)]),c[3*(i+1)+2]);
      c[3*i]=a[3*i]+min(min(c[3*i+1],c[3*(i+1)+1]),c[3*(i+1)]);
    }
    cout<<j<<". "<<c[1]<<endl;
    j++;
    cin>>l;
  }
}


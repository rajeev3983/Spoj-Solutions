#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  string s;
  int count,i,k;
  k=1;
  while(cin>>s){
    count=0;
    for(i=0;i<s.length();i++){
      if((s[i]=='1' && count%2==0) || (s[i]=='0' && count%2))
	count++;
    }
    cout<<"Game #"<<k<<": "<<count<<endl;
    k++;
  }
}


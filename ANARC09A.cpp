#include <iostream>
using namespace std;
int main(){
  int o,i,c,cases,count;
  string s;
  cin>>s;
  cases=0;
  while(s[0]!='-'){
    cases++;
    o=0;
    count=0;
    for(i=0;i<s.length();i++){
      if(s[i]=='{')
	o++;
      else{
	if( o==0){
	  o++;
	  count++;
	}
	else{
	  o--;
	}
      }
      
    }
    cout<<cases<<". "<<o/2+count<<endl;
    cin>>s;
  }
}


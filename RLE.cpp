#include <iostream>
using namespace std;
int main(){
  int i,j,k;
  string s;
  char c;
  while(cin>>s){
    i=0;
    while(s[i]!='\0'){
      j = 0;
      c = s[i];
      while(s[i]!='\0' && s[i]==c){
	i++;
	j++;
      }
      if(j<=3){
	for(k=0;k<j;k++)
	  cout<<c;
	
      }
      else
	cout<<j<<"!"<<c;
    }
    cout<<endl;
  }
}

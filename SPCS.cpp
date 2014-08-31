#include <iostream>
using namespace std;
int main(){
  int t,i,j,k,n;
  bool fail;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    n = s.length();
    i=0;
    j=n-1;
    if(s[i]!=s[j]){
      cout<<"NO"<<endl;
      continue;
    }
    fail = false;
    while(i<j){
      while(i<j && s[i]==s[j]){
	i++;
	j--;
      }
      if(i<j && s[i]==s[i-1]){
	while(s[i]==s[i-1])
	  i++;
	if(s[i]!=s[j]){
	  fail = true;
	  break;
	}
      }
      else if(i<j && s[j]==s[j+1]){
	while(s[j]==s[j+1])
	  j--;
	if(s[i]!=s[j] ){
	  fail=true;
	  break;
	}
      }
      else if( i<j){
	fail = true;
	break;
      }
    }
    if( fail )
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
  }
}

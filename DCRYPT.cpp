#include <iostream>
#include <cctype>
using namespace std;
int main(){
  int t,i,j,k,key;
  cin>>t;
  string s;
  while(t--){
    cin>>key;
    cin>>s;
    if(key<26){
      for(i=0;i<s.length();i++){
	if(s[i]=='.')
	  cout<<" ";
	else if(islower(s[i]))
	  cout<<(char)((s[i]-'a'+key)%26+'a');
	else
	  cout<<(char)((s[i]-'A'+key)%26+'A');
      }
    }
    else{
      for(i=0;i<s.length();i++){
	if(s[i]=='.')
	  cout<<" ";
	else if(islower(s[i]))
	  cout<<(char)((s[i]-'a'+key)%26+'A');
	else
	  cout<<(char)((s[i]-'A'+key)%26+'a');
	
      }
    }
    cout<<endl;
  }
}

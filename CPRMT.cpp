#include <iostream>
using namespace std;
int main(){
  int a[26],b[26],k,i;
  string s1,s2;
  while(cin>>s1){
    cin>>s2;
    for(i=0;i<26;i++){
      a[i]=0;
      b[i]=0;
    }
    for(i=0;i<s1.length();i++){
      
      a[s1[i]-'a']++;
    }
    for(i=0;i<s2.length();i++){
      b[s2[i]-'a']++;
    }
    for(i=0;i<26;i++){
      k=min(a[i],b[i]);
      while(k>0){
	cout<<(char)(i+'a');
	k--;
      }
    }
    cout<<endl;
  }
}


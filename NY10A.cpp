#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  int t,i,j,n,l;
  string s,s1;
  cin>>t;
  while(t--){
    map<string,int> m;
    cin>>n;
    cin>>s;
    l=s.length();
    for(i=0;i<l-2;i++){
      s1=s.substr(i,3);
      m[s1]++;
    }
    cout<<n<<" "<<m["TTT"]<<" "<<m["TTH"]<<" "<<m["THT"]<<" "<<m["THH"]<<" "<<m["HTT"]<<" "<<m["HTH"]<<" "<<m["HHT"]<<" "<<m["HHH"]<<endl; 
  }
}


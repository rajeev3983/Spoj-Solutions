#include <iostream>
#include <algorithm>
using namespace std;
string *sArray;
string fun( string *sArray, int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=0;j<sArray[i].length() && j<sArray[i+1].length();j++){
      if(sArray[i][j]!=sArray[i+1][j] )
	break;
    }
    if ( j==sArray[i].length() || j==sArray[i+1].length() )
      return "NO";
  }
  return "YES";
}

int main(){
  int t,n,i;
  cin>>t;
  while(t--){
    cin>>n;
    sArray = new string[n];
    for(i=0;i<n;i++)
      cin>>sArray[i];
    sort(sArray,sArray+n);
    cout<<fun(sArray,n)<<endl;
  }
}


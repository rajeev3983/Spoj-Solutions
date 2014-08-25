#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int find(int n,bool odd){
  //cout<<"n"<<n<<odd<<endl;
  if(n==1)
    return 1;
  if(n==2){
    if(odd)
      return 2;
    return 1;
  }
  if(n%2==0){
    if(odd)
      return 2*find(n/2,odd);
    else
      return 2*find(n/2,odd)-1;
  }
  if(odd){
    return 2*find(n/2,false);
  }
  else{
    return 2*find(n/2+1,true)-1;
  }
}


int main(){
  int n;
  string s;
  cin>>s;
  while(strcmp(s.c_str(),"00e0")!=0){
    
    n=(s[0]-'0')*10 +(s[1]-'0');
    n=n*pow(10,s[3]-'0');
    //cout<<n<<endl;
    
    cout<<find(n,false)<<endl;
    cin>>s;
  }
  
}


#include <iostream>
using namespace std;
long gcd(unsigned long long int num,long k){
  if(num%k==0)
    return k;
  else
    return gcd(k,num%k);
     
}


int main(){
  int i,j,k,l;
  unsigned long long int num;
  bool flag;
  string s;
  int   B[]={1,2,3,5,7,11,13,17,19};
  cin>>s;
  while(s!="*"){
    l=s.length();
    num=1;
    k=0;
    while(k<l){
      if(s[k]=='Y'){
	num=num*(k+1)/(gcd(num,k+1));
      }
      k++;
                             
    }
    // cout<<num<<endl;
    flag=0;
    for (k=0;k<l;k++){
      if(s[k]=='N'){
	if(num%(k+1)==0){
	  flag=1;
	  break;
	}
      }
                            
    }
                            
    if(flag==0)
      cout<<num<<endl;
    else
      cout<<-1<<endl;
    cin>>s;
  }
    
}


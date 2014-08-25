#include <iostream>
using namespace std;
int main(){
  int i,j,m,n,l,flag;
  string s;
  cin>>i;
  char *A;
  while(i!=0){
    cin>>s;
    j=s.length();
    A= new char[j];
    l=0;
    n=0;
    flag=0;
    for(m=0;m<i;m++){
      l=m;
      flag=0;
      while(l<j){
	//  cout<<"M";
	A[n]=s[l];
	n++;
	if (flag==0){
	  l=l+ 2*(i-m)-1;
	  flag=1;
	}
	else{
	  l= l + 2*m +1;
	  flag=0;
	}
                                            
      }
    }
    for(i=0;i<j;i++){
      cout<<A[i];
    }
    cout<<endl;
                
    cin>>i;
  }
    
}


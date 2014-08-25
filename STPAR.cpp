#include <iostream>
using namespace std;
class stack{
public:
  int  top;
  int A[1000];
  stack(){
    top=-1;
  }
  void   push(int i){
    A[++top]=i;
  }
  int pop(){
    return A[top--];
  }
  int tup(){
    if(top==-1) return 0;
    else
      return A[top];
  }
};
int main(){
  int i,j,k,l,n;
       
  cin>>i;
      
    
  while(i!=0){
    n=1;
    k=i;
    stack   s;
    while(i>0){
      cin>>j;
      if(n==j){
	n++;
	while(s.tup()==n){
	  s.pop();
	  n++;
	}
      }
                               
      else if(n==s.tup()){
	while(s.tup()==n){
	  s.pop();
	  n++;
	}
      }
      else {
	s.push(j);
      }
      i--;
    }
    while(s.tup()==n){
      n++;
      s.pop();
                                      
    }
    // cout<<n<<endl;
    if(n-1==k) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    cin>>i;
  }
}
                              
                   


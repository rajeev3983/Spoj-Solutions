#include <iostream>
#include <cctype>
#include <math.h>
#define MAX 500
using namespace std;

class stacko{
  int tip;
  char stko[MAX];
public:
  stacko(){
    tip=-1;
  }
  void push(char x){
    stko[++tip]=x;
  }
  char pop(){
    if(tip==-1)
      return '.';
    else
      return stko[tip--];
  }
  char tipo(){
    if(tip==-1)
      return ',';
    else
      return stko[tip];
  }
};
               
               
int prec( char x){
  if(x=='^')
    return 5;
  else if ( x=='/')
    return 4;
  else if(x=='*')
    return 3;
  else if(x=='-')
    return 2;
  else if(x=='+')
    return 1;
  else return 0;
}
     
                        
int main(){
    
  int h,c,i,j;
  string s;
  stacko op;
  cin>>h;
    
  while(h--!=0){
    cin>>s;
    char  out[MAX];
    fflush(stdin);
    i=0;
    j=0;
    while(j<s.length())
      {
	c=s[j];
	j++;
	if(isalpha(c)){
	  out[i]=c;
	  i++;
	}
                                            
                                            
	else if(c=='('|| c=='^'){
	  op.push(c);
	}
                                   
                                   
	else if(c==')')
	  {
	    while(op.tipo()!='('){
	      out[i]=op.pop();
	      i++;
	    }
	    op.pop();
	  }
                                                      
                                                      
                                                      
	else if(c=='+' || c=='-' || c=='*' || c=='/'){
	  if(prec(op.tipo())< prec(c)){
	    op.push(c);
                                                              
	  }
	  else{
	    while(prec(op.tipo())>prec(c))
	      {
                                        
                                                    
		out[i]=op.pop();
		i++;
	      }
                                                    
	    op.push(c);
	  }
	}
                                       
                                       
      }

    while((op.tipo())!=',')
      {
	out[i]=op.pop();
	i++;
      }
    out[i]='\n';
    i=0;
    while(out[i]!='\n')
      {
	cout<<out[i];
	i++;
      }
    cout<<endl;
  }  
  //cin>>i;                                     
}    
    
                        


#include <iostream>
using namespace std;
class KMP{
public:
  string pattern;
  string text;
  int m;
  int n;
  int *pi;
      
  KMP(){
      
  }
     
                  
  void set(string s){
    pattern="a"+s;
    text=s;
    n=pattern.length()+1;
    pi= new int[n];
  }
                  
  void    compute_prefix(){
    int i,k,m=0,t;
    bool b=true;
    pi[0]=0;
    pi[1]=0;
    k=0;
    for(i=2;i<n;i++){
      while(k>0 && pattern[k+1]!= pattern[i]){
	k=pi[k];
      }
      if(pattern[k+1]==pattern[i]){
	k++;
      }
      pi[i]=k;
      m=max(m,k);
    }
    for(i=1;i<n-1;i++){
      //   cout<<pi[i]<<"  ";
    }
    //   cout<<endl;
    t=0;
    k=(n-2-m);
    n-=2;
    if(n%k!=0){
      cout<<1<<endl;
      return;
    }
    i=0;
    while(i<n){
      //  cout<<k<<endl;
      for(t=0;t<k && i<n;t++){
	if (text[t]!=text[i]){
	  cout<<1<<endl;
	  return;
	}
	i++;
      }
       
    }
    cout<<n/k<<endl;
                                        
  }
               
                       
};

int main(){
  string s1,s2;
  KMP k;
  cin>>s1;
  while(s1!="*"){
    k.set(s1);
    k.compute_prefix();
    cin>>s1;
  } 
}



#include <iostream>
using namespace std;
class mnode{
public:
  bool engaged;
  int next;
  bool settled;
  int  gf;
};

class wnode{
public:
  bool engaged;
  int current;
  bool settled;
  int bf;
};
int main(){
  mnode m[500];
  wnode w[500];
  int a[500][500],b[500][500],t,n,proposed,i,j,k,t1;
  cin>>t;
  while(t--){
    cin>>n;
    for(i=0;i<n;i++){
      cin>>k;
      for(j=0;j<n;j++){
	cin>>t1;
	b[k-1][j]=t1-1;
      }
    }
    for(i=0;i<n;i++){
      cin>>k;
      for(j=0;j<n;j++){
	cin>>t1;
	a[k-1][j]=t1-1;
      }
    }
    for(i=0;i<n;i++){
      m[i].engaged=false;
      m[i].settled=false;
      m[i].next=0;
      w[i].engaged=false;
      w[i].settled=false;
    }
    i=0;
    while(i<n){
      if(!m[i].engaged){
	proposed=a[i][m[i].next];
	
	if(!w[proposed].engaged){
	  w[proposed].engaged=true;
	  w[proposed].current=i;
	  m[i].engaged=true;
	  i++;
	}
	else{
	  
	  proposed=a[i][m[i].next];
	  k=w[proposed].current;
	  j=0;
	  while(b[proposed][j]!=k && b[proposed][j]!=i){
	    j++;
	  }
	  if(b[proposed][j]==i){
	    w[proposed].current=i;
	    m[i].engaged=true;
	    i=k;
	    m[i].engaged=false;
	    m[i].next++;
	  }
	  else{
	    //cout<<"he"<<endl;
	    m[i].next++;
	  }
	}
      }
      else{
	i++;
      }
      
      
    }
    for(i=0;i<n;i++){
      cout<<i+1<<" "<<a[i][m[i].next]+1<<endl;
    }
  }
}


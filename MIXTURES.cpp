#include <iostream>
using namespace std;
#define inf 922337203;
class MCM{
public:
  unsigned long long int m[100][100];
  int s[100][100],b[101],n;
  void find(){
    if (n==1){
      cout<<0<<endl;
      return;
    }
    //cout<<"find"<<endl;
    int i,l,k;
    unsigned long long int q;
    for(i=0;i<n;i++){
      m[i][i]=0;
      s[i][i]=b[i];
    }
    for(l=1;l<n;l++){
      for(i=0;i<n-l;i++){
	m[i][i+l]=inf;
	for(k=i;k<i+l;k++){
	  q= m[i][k]+ m[k+1][i+l]+ s[i][k]*s[k+1][i+l];
	  if(q<m[i][i+l]){
	    m[i][i+l]=q;
	    s[i][i+l]=(s[i][k]+s[k+1][i+l])%100;
	  }
	}
      }
    }
    
    cout<<m[0][n-1]<<endl;
  }
  
};




int main(){
  int i;
  MCM c;
  while(cin>>c.n){
    for(i=0;i<c.n;i++){
      cin>>c.b[i];
    }
    c.find();
  }
}


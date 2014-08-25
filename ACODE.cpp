#include <iostream>
using namespace std;
int main(){
  int i,j,k,l;
  unsigned  int  *a, *b;
  int  *w;
  string s;
  while(cin>>s){
                
    if(s=="0")
      break;
    k=s.length();
    if(k<2)
      {
	cout<<1<<endl;
	continue;
      }
    a= new  unsigned int[k];
    b= new  unsigned int[k];
    for(i=0;i<k;i++)
      a[i]=s[i]-'0';
    for(i=1;i<k;i++)
      b[i]=10*(a[i-1]) + a[i];
    w=new int[k];
    for(i=0;i<k;i++)
      w[i]=0;
    w[0]=1;
    if(a[1])
      w[1]=1;
    else
      w[1]=0;
    if(b[1]>9 && b[1]<27)
      w[1]++;
    // cout<<w[1]<<endl;
    for(i=2;i<k;i++){
      if(a[i])
	w[i]=w[i-1];
      else
	w[i]=0;
      if(b[i]>9 && b[i]<27)
	w[i]+=w[i-2];
                                 
    }
    // if(w[k-1]==0)
    // k--;
    //    double m= max(w[k-1],w[k-2]);
    //    m=max(m,w[k-3]);
    //  cout<<m<<endl;
    cout<<w[k-1]<<endl;
  }
}


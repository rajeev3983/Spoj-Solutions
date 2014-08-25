#include <iostream>
using namespace std;
int main(){
  int n, i,k,m,l;
  long long int total;
  cin>>n;
  while(n--){
    cin>>i>>k;
    i--;
    k--;
    total=1;
    m=i-k;
    if(k>m)
      swap(m,k);
    l=2;
    while(i>m && l<=k){
      if( total% l==0){
	total=(total/l)*i;
	i--;
	l++;
      }
      else if(i% l==0){
	total=total*(i/l);
	i--;
	l++;
      }
      else{
	total=(total*i);
	i--;
      }
                               
      //    cout<<total<<endl;
    }
    if(i>m){
      while(i!=m){
	total=total*i;
	i--;
      }
      //  cout<<total<<endl;
    }
                         
                
    while(l<=k){
      total=total/l;
      l++;
    }
                     
                     
                     
    cout<<total<<endl;
               
  }
}


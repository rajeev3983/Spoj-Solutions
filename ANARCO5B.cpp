#include <iostream>
#include <algorithm>
#define infi 1000000001;
using namespace std;
int main(){
  int a[10000],b[10000],i,j,n1,n2;
  long long int count,sum1,sum2;
  cin>>n1;
  while(n1!=0){
    for(i=0;i<n1;i++)
      cin>>a[i];
    cin>>n2;
    for(i=0;i<n2;i++)
      cin>>b[i];
    j=0;
    i=0;
    count=0;
    while(i<n1||j<n2){
      sum2=0;
      sum1=0;
      while(i<n1 && j<n2 && a[i]!=b[j]){
	if(a[i]<b[j]){
	  sum1+=a[i];
	  i++;
	}
	else{
	  sum2+=b[j];
	  j++;
	}
      }
      if(i<n1 && j<n2){
	//cout<<sum1<<" "<<sum2<<endl;
	count+=max(sum1,sum2);
	count+=a[i];
	i++;
	j++;
      }
      else if(j==n2){
	while(i<n1){
	  sum1+=a[i];
	  i++;
	}
	count+=max(sum1,sum2);
      }
      else if(i==n1){
	while(j<n2){
	  sum2+=b[j];
	  j++;
	}
	count+=max(sum1,sum2);
      }
    }
    cout<<count<<endl;
    cin>>n1;
  }
}



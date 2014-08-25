#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
  int a[100000],t,i,j,k,count,n,c1,c2;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    sort(a,a+n);
    i=0;
    j=n-1;
    count=0;
    while(i<j){
      if(a[i]+a[j]<k)
	i++;
      else if( a[i]+a[j]>k)
	j--;
      else{
	c1=1;
	c2=1;
	i++;
	j--;
	while(i<j && a[i]==a[i-1]){
	  c1++;
	  i++;
	}
	while(i<j && a[j]==a[j+1]){
	  c2++;
	  j--;
	}
	count+=(c1*c2);
      }
    }
    printf("%d\n",count);
  }
}


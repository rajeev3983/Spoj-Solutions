#include <stdio.h>
bool fun(int a[],int n){
  int i;
  for(i=n-1;i>0;i--){
    if(a[i]<0){
      return false;
    }
    else{
      a[i-1]-=a[i];
    }
  }
  if(a[0]!=0)
    return false;
  return true;
}

int main(){
  int t,i,n,a[10000];
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",a+i);
    }
    if(fun(a,n))
      printf("YES\n");
    else
      printf("NO\n");
    
  }
}


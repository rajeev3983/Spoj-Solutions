#include <stdio.h>
int main(){
  unsigned int t,x,i;
  x=0;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&i);
    x=x^i;
  }
  printf("%d",x);
  return 0;
}

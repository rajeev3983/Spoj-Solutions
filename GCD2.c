#include <stdio.h>
char b[250];

int Remainder( int a ){
  int i=0,rm=0;
  while(b[i]!='\0'){
    while(b[i]!='\0' && rm<a){
      rm = rm*10+b[i++]-'0';
    }
    if(rm>=a)
      rm=rm%a;
  }
  return rm;
}

int gcd( int a1, int a2){
  if( a2 == 0 )
    return a1;
  return gcd( a2,a1%a2 );
}
int main(){
  int t,i,j,k,a;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&a);
    scanf("%s",b);
    if( a==0 ){
      printf("%s\n",b);
      continue;
    }
    j = Remainder(a);
    printf("%d\n",gcd(a,j));
  }
  return 0;
}

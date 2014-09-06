#include <stdio.h>
int main(){
  int t,i,j,k;
  char s1[1001];
  char s2[1001];
  char o[1001];
  scanf("%d",&t);
  while(t--){
    scanf("%s",s1);
    scanf("%s",s2);
    i=0;j=0;k = -1;
    while(s1[i]!='\0' && s2[i]!='\0' ){
      if(s1[i]=='1' && s2[i]=='1' ){
	o[i]='1';
	k = i;
      }
      else
	o[i]='0';
      i++;
    }
    o[k+1]='\0';
    if(k==-1)
      printf("relatively prime\n");
    else
      printf("%s\n",o);
  }
  return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
  char s[30];
  long long int i,j,k,t,total;
  scanf("%lld",&t);
  while(t>0 ){
    scanf("%s",s);
    if(s[0]>='0' && s[0]<='9'){
      t--;
      i=0;
      total = 1;
      while(s[i]!='\0'){
	j=1;
	while(s[i]==s[i+1]){
	  j++;
	  i++;
	}
	i++;
	total*=pow(2,j-1);
      }
      printf("%lld\n",total);
    }
  }
  return 0;
}

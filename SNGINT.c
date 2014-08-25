#include <stdio.h>
void r(int *n){
  int sign = 1;
  char c;
  int found = 0;
  *n = 0;   
  while(1){
    c = getc(stdin);
    
    switch(c){
    case '-' :
      sign = -1;
      found = 1;
      break;
    case ' ':
      if(found) goto jump;
      break;
    case '\n':
      if(found) goto jump;
      break;
    default:
      if(c>='0' && c<='9'){
	*n = (*n)*10+c-'0';
	found = 1;
      }else goto jump;
      break;
    }
  }
    
 jump:
  (*n) *= sign;
}

int main(){
  int t,i,j,n;
  r(&t);
  while(t--){
    r(&n);
    if ( n==0 ){
      putchar('1');
      putchar('0');
      putchar('\n');
      continue;
    }
    if ( n==1 ){
      putchar('1');
      putchar('\n');
      continue;
    }
    int m[10]={0};
    i = 9;
    while( n>1 && i>1){
      while(n%i==0){
	n/=i;
	m[i]++;
      }
      i--;
    }
    if(n!=1){
      putchar('-');
      putchar('1');
      putchar('\n');
      continue;
    }
    for(j=2;j<10;j++ ){
      for(i=0;i<m[j];i++)
	putchar('0'+j);
    }
    putchar('\n');
  }
}


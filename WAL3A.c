#include <stdio.h>
#include <stdlib.h>
#define ll long long int
ll  A[100000];
ll  B[100000];
ll  C[100000];
ll min( ll a, ll b){
  return a<b?a:b;
}
ll max( ll a, ll b){
  return a>b?a:b;
}

/* int fun(int n){ */
/*   int i,j,k,c; */
/*   int flag=1; */
/*   j =0; */
/*   c =0; */
/*   while( flag ){ */
/*     flag = 0; */
/*     k = 0; */
/*     for(i=0;i<n-1;i++){ */
/*       if(A[i]>0 && A[i+1]>0){ */
/* flag = 1; */
/* c+=2-k; */
/* k = 1; */
/* A[i]-=1; */
/* if(i==n-2){ */
/*   A[i+1]--; */
/* } */
/*       } */
/*       else if ( k== 1){ */
/* k = 0; */
/* A[i]--; */
/*       } */
/*     } */
/*   } */
/*   return c; */
/* } */

int main(){
  ll t,i,j,k,n,c,d;
  scanf("%lld",&t);
  //t = 200;
  while(t--){
    scanf("%lld",&n);
    //n = 100;
    for(i=0;i<n;i++){
      scanf("%lld",A+i);
      // A[i]= rand()%10;
      //C[i]=A[i];
    
    }
    if( n==1 ){
      printf("%d\n",0);
      continue;
    }
    j=0;
    for(i=0;i<n-1;i++)
      B[i] = min(A[i],A[i+1]);
    c =2*B[0];
    for(i=1;i<n-1;i++)
      c+=2*B[i]- min(B[i-1],B[i]);
    /* d = fun(n); */
    /* if( c!=d){ */
    /*   printf("%d\n",c); */
    /*   printf("fun = %d\n",d); */
    /*   for(i=0;i<n;i++) */
    /* printf("%d ",C[i]); */
    /*   printf("\n"); */
    /*   return 0; */
    /* } */
    printf("%lld\n",c);
  }
  return 0;
}


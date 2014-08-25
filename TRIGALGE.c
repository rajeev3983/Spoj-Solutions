#include <stdio.h>
#include <stdio.h>
#include <math.h>
double fun( double A, double B, double C ){
  double x, xp;
  xp = (C-B)/A;
  x = xp + 1 ;
  while( fabs(x-xp) >= 1e-6 ){
    x = xp;
    xp = x- (A*x + B*sin(x) - C)/( A + B*cos(x) );
  }
  return x;
}
int main(){
  double t,i,j,A,B,C;
  scanf("%lf",&t);
  while(t--){
    scanf("%lf%lf%lf",&A,&B,&C);
    printf("%.6lf\n",fun(A,B,C));
  }
  return 0;
}


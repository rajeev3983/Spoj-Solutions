#include <stdio.h>
int A[1000000]={0};
void factor()
{
  int i,j,k;
  for(i=1;i<=1000;i++)
    {
      for(j=i+1;j<=1000;j++)
	{
	  for(k=1;k*(i*i+j*j)<=1000000;k++)
	    A[k*(i*i+j*j)]=-1;
	}
    }
}
int main()
{  int t;
  scanf("%d",&t);
  factor();
  while(t--)
    {
      int num;
      scanf("%d",&num);
      if(A[num]==-1)
        printf("YES\n");
      else
        printf("NO\n");
    }
  return 0;
}


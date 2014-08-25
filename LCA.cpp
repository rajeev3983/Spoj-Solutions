#include <stdio.h>
class node{
public:
  int ind;
  node *next;
};
class vnode{
public:
  int parent;
  node *next;
  node *start;
  node *temp;
  void add(int i){
    if(start==NULL){
      start=new node();
      start->ind=i;
      start->next=NULL;
      temp=start;
    }
    else{
      temp->next=new node();
      temp=temp->next;
      temp->ind=i;
      temp->next=NULL;
    }
    
  }
};



int main(){
  vnode a[1000];
  node *tem;
  int b1[1000],b2[1000];
  int cases;
  int t,n,i,j,k,p,v1,v2,k1;
  scanf("%d",&t);
  cases=1;
  while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
      a[i].start=NULL;
      a[i].parent=-1;
      scanf("%d",&j);
      for(k=0;k<j;k++){
	scanf("%d",&p);
	a[i].add(p-1);
      }
    }
    scanf("%d",&p);
    printf("Case %d:\n",cases);
    cases++;
    for(i=0;i<n;i++){
      tem = a[i].start;
      while(tem!=NULL){
	j=tem->ind;
	a[j].parent=i;
	tem=tem->next;
      }
    }
    while(p--){
      scanf("%d%d",&v1,&v2);
      if(v1==v2){
	printf("%d\n",v1);
	continue;
      }
      i=a[v1-1].parent;
      b1[0]=v1-1;
      k=1;
      while(i!=-1){
	b1[k]=i;
	k++;
	i=a[i].parent;
      }
      k--;
      b2[0]=v2-1;
      i=a[v2-1].parent;
      k1=1;
      while(i!=-1){
	b2[k1]=i;
	k1++;
	i=a[i].parent;
      }
      k1--;
      while(b1[k]==b2[k1]){
	k--;
	k1--;
      }
      printf("%d\n",b1[k+1]+1);
    }    
  }
}


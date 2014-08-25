#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int value;
  int l;
  int r;
  struct node *left;
  struct node *right;
}node;

void makeTree(node *curr){
  int mid,i,j,k;
  if( curr->l==curr->r)
    return;
  mid =(curr->l + curr->r)/2;
  curr->left = malloc(sizeof(node));
  curr->left->value =0;
  curr->left->l=curr->l;
  curr->left->r=mid;
  makeTree(curr->left);
  curr->right = malloc(sizeof(node));
  curr->right->value = 0;
  curr->right->l= mid+1;
  curr->right->r=curr->r;
  makeTree(curr->right);
}

int search(node *curr,int i,int sum){
  int mid,result,temp;
  if(curr->l==curr->r){
    temp = sum+curr->value;
    curr->value = -sum;
    return temp;
  }
  mid = (curr->l+curr->r)/2;
  if(i<=mid)
    result = search(curr->left,i,sum+curr->value);
  else 
    result = search(curr->right,i,sum+curr->value);
  return result;
}

void add(node * curr, int L, int R ){
  int i,j,mid;
  if( L>R)
    return;
  if(curr->l==L && curr->r==R){
    curr->value++;
    return;
  }
  mid = (curr->l + curr->r)/2;
  if(L<=mid && R<=mid)
    add(curr->left,L,R);
  else if(L>mid && R>mid)
    add(curr->right,L,R);
  else{
    add(curr->left,L,mid);
    add(curr->right,mid+1,R);
  }
}

int main(){
  int n,i,j,k;
  scanf("%d",&n);
  node * root = (node *)malloc(sizeof(node));
  root->value=0;
  root->l=1;
  root->r=100000;
  makeTree(root);
  for(i=0;i<n;i++){
    scanf("%d%d",&j,&k);
    printf("%d\n",search(root,j,0)+search(root,k,0));
    add(root,j+1,k-1);
  }
  return 0;
}



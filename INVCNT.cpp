#include <iostream>
using namespace std;
unsigned long long int count;
void mergesort(int a[],int start,int end){
  //cout<<start<<" "<<end<<endl;
  if(start==end)
    return;
  int i,j,k,m,*b,*c,l;
  m=(end+1-start)/2;
  k=end-start+1-m;
  mergesort(a,start,start+m-1);
  mergesort(a,start+m,end);
  b=new int[m];
  c=new int[k];
  for(i=start;i<start+m;i++)
    b[i-start]=a[i];
  for(i=start+m;i<=end;i++)
    c[i-start-m]=a[i];
  i=j=0;
  l=start;
  while(l<=end){
    if((i<m && b[i]<=c[j])|| j==k){
      a[l]=b[i];
      i++;
    }
    else if((j<k && c[j]<b[i])|| i==m){
      a[l]=c[j];
      j++;
      count+=m-i;
    }
    l++;
  }
}

int main(){
  int a[200000],t,n,i;
  cin>>t;
  while(t--){
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];
    count=0;
    mergesort(a,0,n-1);
    cout<<count<<endl;
  }
  
}


#include <iostream>
#include <stack>
#define lli long long int
using namespace std;
lli maxArea(lli a[],int n){
  stack<int> s;
  int tp,i;
  lli max_area;
  i=0;
  max_area=0;
  while(i<n){
    if(s.empty() || a[s.top()]<=a[i]){
      s.push(i++);
    }
    else{
      tp=s.top();
      s.pop();
      lli area= a[tp] * (s.empty() ? i : i - s.top() - 1);
      if(area>max_area)
	max_area=area;
    }
  }
  
  while(s.empty()==false){
    tp=s.top();
    s.pop();
    lli area= a[tp] * (s.empty() ? i : i - s.top() - 1);
    if(area > max_area)
      max_area=area;
  }
  return max_area;
}

int main(){
  lli a[100000],n,j;
  cin>>n;
  while(n!=0){
    for(j=0;j<n;j++)
      cin>>a[j];
    cout<<maxArea(a,n)<<endl;
    cin>>n;
  }
}


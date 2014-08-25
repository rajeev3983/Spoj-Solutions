#include <iostream>
using namespace std;
class node{
public:
  int weight;
  int value;
};
int main(){
  int i,j,b,n;
  node a[100];
  int bg[501][101];
  cin>>b>>n;
  while(b!=0 || n!=0){
    for(i=0;i<n;i++){
      cin>>a[i].weight>>a[i].value;
      bg[0][i]=0;
    }
    for(i=0;i<=b;i++){
      bg[i][0]=0;
    }
    
    
    
    for(i=1;i<=n;i++){
      for(j=1;j<=b;j++){
	if(a[i-1].weight<=j){
	  bg[j][i]=max(max(bg[j][i-1],bg[j-1][i]), bg[j-a[i-1].weight][i-1] + a[i-1].value);
	  //cout<< a[i-1].value<<"  "<<bg[j][i]<<endl;
	}
	else{
	  bg[j][i]=max(bg[j][i-1],bg[j-1][i]);
	}
	//cout<<bg[j][i]<<" ";
      }
      //cout<<endl;
      
    }
    i=b;
    
    while(i>0 && bg[i][n]==bg[b][n])
      i--;
    
    cout<<i+1<<" "<<bg[b][n]<<endl;
    cin>>b>>n;
  }
  
  
}


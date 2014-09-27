#include <iostream>
using namespace std;
int A[1000][1000];
int B[1000];
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cin>>A[i][j];
	}
	if( n==2 ){
		cout<<"1 1"<<endl;
		return 0;
	}
	for(i=1;i<n-1;i++)
		B[i]= (A[0][i]+A[i][n-1] - A[0][n-1])/2;
	B[0] = A[0][1]-B[1];
	B[n-1] = A[0][n-1]-B[0];
	for(i=0;i<n;i++)
		cout<<B[i]<<" ";
	cout<<endl;
}

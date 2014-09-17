#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int A[4],i,j,k;
  i =1;
  while(cin>>A[0]){
    cin>>A[1]>>A[2]>>A[3];
    sort(A,A+4);
    cout<<"Case "<<i<<": ";
    cout<<A[3]+A[2]<<endl;
    i++;
  }
}

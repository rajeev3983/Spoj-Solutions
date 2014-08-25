#include <iostream>
#include <cmath>
using namespace std;
main(){int i,max,k; double m,n,j;while(cin>>i){max=0;j=sqrt(i);m=10;for(k=1;k<m;k++){m=sqrt(i-k*k);if(floor(m)== m && ceil(m)==m){max++;}}cout<<max<<endl;}}          


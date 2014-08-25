#include <iostream>
using namespace std;
int main(){int i,a,k,j;unsigned long long int b;cin>>i;while(i--){cin>>a>>b;a=a%10;if(a==0){cout<<0<<endl;}else if(a==1 || b==0){cout<<1<<endl;}else if(a==2){int A[]={6,2,4,8};cout<<A[b%4]<<endl;}else if(a==3){int A[]={1,3,9,7};cout<<A[b%4]<<endl;}else if(a==4){int A[]={6,4};cout<<A[b%2]<<endl;}else if(a==5){cout<<5<<endl;}else if(a==6){cout<<6<<endl;}else if(a==7){int  A[]={1,7,9,3};cout<<A[b%4]<<endl;}else if(a==8){int A[]={6,8,4,2};cout<<A[b%4]<<endl;}else if(a==9){int  A[]={1,9};cout<<A[b%2]<<endl;}}}


#include <iostream>
#define ll long long int
using namespace std;

class node{
public:
  ll l,b,h;
};

ll gcd( ll a, ll b){
  if( b==0 )
    return a;
  return gcd(b,a%b);
}

node A[10000];
ll B[30000];
int main(){
  ll t,i,j,k,n,g,c;
  cin>>n;
  while(n!=0){
    for(i=0;i<n;i++){
      cin>>A[i].l>>A[i].b>>A[i].h;
      B[3*i]= A[i].l;
      B[3*i+1]= A[i].b;
      B[3*i+2]= A[i].h;
    }
    g = B[0];
    for(i=1;i<3*n;i++){
      g = gcd(g,B[i]);
    }
    c = 0;
    for(i=0;i<n;i++)
      c+= (A[i].l * A[i].b * A[i].h )/(g*g*g);
    cout<<c<<endl;
    cin>>n;
  }
}

#include <iostream>
using namespace std;
bool check(int k,int i){
  if (k==i) return true;
  else return false;
}
bool b;
     
void walk1(int &x,int &y,int &k,int i){
  while(y!=-x && b==false){
    y--;
    k--;
    b= check(k,i);
  }
}


void walk2(int &x,int &y,int &k, int i){
  while(x!=0 && b==false){
    x--;
    k--;
    b= check(k,i);
  }
}


void walk3(int &x,int &y, int &k, int i){
  while(y!=0 && b==false){
    x--;
    y++;
    k--;
    b=       check(k,i);
  }
}


void walk4(int &x, int &y, int &k, int i){
  while(y!=-x && b==false){
    y++;
    k--;
    b=        check(k,i);
  }
}


void walk5(int &x, int &y, int &k, int i){
  while(x!=0 && b==false){
    x++;
    k--;
    b=      check(k,i);
  }
}


void walk6(int &x, int &y, int &k, int i){
  if(y==1){
    y--;
    k--;
    b=      check(k,i);
  }
  else {
    while(y!=1 && b==false){
      x++;
      y--;
      k--;
      b=      check(k,i);
    }
  }
}

main(){
  int i,r,k,x,y;
  while(cin>>i){
    b=false;
    r=0;
    k=1;
    while(i > k)
      {
	r++;
	k += r*6;
      }
    x=r;
    y=0;
                     
    b=check(k,i);
    while(1){
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk1(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk2(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk3(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk4(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk5(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
      walk6(x,y,k,i);
      if(b==true){
	cout<<x<<" "<<y<<endl;
	break;
      }
    }  
                                 
  }
}


#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <map>
using namespace std;
int main(){
  string s;
  char *c;
  char *c2;
  char *n1,*n2;
  int num1,num2;
  int i,j,k,l;
  map<string,int> m;
  m["063"]=0;
  m["010"]=1;
  m["093"]=2;
  m["079"]=3;
  m["106"]=4;
  m["103"]=5;
  m["119"]=6;
  m["011"]=7;
  m["127"]=8;
  m["107"]=9;
  map<int,string> m1;
  m1['0']="063";
  m1['1']="010";
  m1['2']="093";
  m1['3']="079";
  m1['4']="106";
  m1['5']="103";
  m1['6']="119";
  m1['7']="011";
  m1['8']="127";
  m1['9']="107";
  cin>>s;
  char *so = (char *)malloc(20);
  while(s!="BYE"){
    c2 = (char *)s.c_str();
    n1 = strtok(c2,"+=");
    n2 = strtok(NULL,"+=");
    string s1(n1);
    string s2(n2);
    num1=0;
    i=0;
    while(n1[i]!='\0'){
      num1=10*num1+m[s1.substr(i,3)];
      i+=3;
    }
    i=0;
    num2 = 0;
    while(n2[i]!='\0'){
      num2 = 10*num2 + m[s2.substr(i,3)];
      i+=3;
    }
    num1=num1+num2;
    sprintf(so,"%d",num1);
    cout<<s1<<"+"<<s2<<"=";
    for(i=0;so[i]!='\0';i++)
      printf("%s",m1[so[i]].c_str());
    printf("\n");
    cin>>s;
  }
}


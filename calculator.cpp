#include<iostream>
using namespace std;
int main()
{
  char a;
  float n1,n2;
  cout<<"Enter operator:+,-,*,/:";
  cin>>a;
  cout<<"Enter two operands:";
  cin>>n1>>n2;
  switch(a)
  {
    case'+':
      cout<<n1<<"+"n2<<"="<<n1+n2;
    break;
    case'-':
      cout<<n1<<"-"n2<<"="<<n1-n2;
    break;
    case'*':
      cout<<n1<<"*"n2<<"="<<n1*n2;
    break;
    case'/':
      cout<<n1<<"/"n2<<"="<<n1/n2;
    break;
    default:
      cout<<"Error";
    break;
}
return 0;
}

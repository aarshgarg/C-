#include<iostream>
using namespace std;
int main()
{
    int a=10;

    int *p;
    p=&a;
  cout<<a<<endl;
  cout<<p<<endl;

  *p=30;
  cout<<a<<endl;
  return 0;
}
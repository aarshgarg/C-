#include<iostream>
using namespace std;
int main()
{
    // we can also modify the value of the number with  the use of the pointer
    int a=10;

    int *p;
    p=&a;
  cout<<a<<endl;
  cout<<p<<endl;

  *p=30;
  cout<<a<<endl;
  return 0;
}
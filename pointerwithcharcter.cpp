#include<iostream>
using namespace std;
int main()
{
    char ch='b';
    char *p=&ch;
  //  p=&ch;
    cout<< ch<<endl;
    cout<< p<<endl;
    p++;
    cout<<p<<endl;
    return 0;

}
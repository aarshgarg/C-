#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int *ptr1,*ptr2;
    x=10;
    ptr1=&x;
    cout<<"content of the pouinter"<<*ptr1<<endl;
    *ptr1=*ptr1+1;
    y=*ptr1;
    cout<<"value of y="<<y<<endl;
    
}
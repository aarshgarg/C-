#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the  two number= ";
cin>>a>>b;
cout<<"Print the number before swapping "<<a<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"Print the number after swapping"<<a<<b;

}
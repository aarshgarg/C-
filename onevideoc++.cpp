#include<iostream>
using namespace std;
int x;// global variable
int y=8;// global variable
int main()
{
    void sum(void);
    x=9;
    sum();
}
void sum(void){
int sum;
sum=x+y;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"sum="<<sum<<endl;
}
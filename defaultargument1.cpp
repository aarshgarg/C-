#include<iostream>
using namespace std;
void sum(int a=1,int b=4,int c=8,int d=9);// function declare prototype 
int main()
{
    //int x,y;
   // cout<<" Enter any two number";
   // cin>>x>>y;
    sum();// sum of default value
}
void sum(int a1,int b1,int c1, int d1)
{
    int temp;
    temp=a1+b1+c1+d1;
    cout<<"temp="<<temp;
}
#include<iostream>
using namespace std;
int main()
{
    int sum (int);
    int n,temp;
    cout<<"Enter the number "<<endl;
    cin>>n;
    temp=sum(n);
    cout<<"value="<<n<<"and its sum="<<temp;
}
int sum(int n)//recursive function
{
    //int sum(int);
    int value=0;
    if(n==0)
    return(value);
else
value=n+sum(n-1);
return(value);
}
#include<iostream>
using namespace std;
int main()

{
    int n,i;
    float  sum,avg,a;
    cout<<" how many number do you like to enter the number";
    cin>> n;
    i=0;
    sum =0;
    while(i<=n-1)
    {
    cout<< "enter the number\n" ;
    cin>>a;
    sum=sum+a;
    i++;
    cout<<"sum="<<sum<<'\t';
}
avg=sum/n;
//cout<<"sum="<<sum<<'\t';
cout<<"avg="<<avg<<"\n";
return 0;
}
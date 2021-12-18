#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"how many number ";
cin>>n;
float  sum=0;
float a;
for (int i=0;i<=n-1;i++)

{
    cout<< "enter the number \n";
cin>>a;
sum=sum+a;
}
//sum=sum+a;
float av;
av=sum/n;
cout<<"sum of the number="<<sum<<endl;
cout<<"average="<<av<<endl;
return 0;
}
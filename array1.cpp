#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,n;
    cout<<"Enter the number to print";
    cin>>n;
    cout<<"enter the number \n";
    for(int i=0;i<=n-1;i++)
    {
       // cout<<"enter the number \n";
        cin>>a[i];

    }
    cout<<"show the value";
    for (int i=0;i<=n-1;i++)
    {
    cout<<a[i]<<endl;
    }
    return 0;

}
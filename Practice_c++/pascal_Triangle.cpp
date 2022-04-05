#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1 ;
    for(int i=2;i<=n;i++ )
    {
        factorial*=i;

    }
return factorial;
}
int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
    cout<<endl;
    }
    return 0;
}
// icj function use 0c0 1c0 1c1 2c0 2c1 2c2 3c0 3c1 3c2 3c3 
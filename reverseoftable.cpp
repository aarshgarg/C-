#include<iostream>
using namespace std;
int main()
{
    int n=1,a,i,m;

    cout<<"\nEnter the table=";
    cin>>a;

    cout<<"\nEnter the table limit=";
    cin>>i;

    while(i>=n)
    {
        m=i*a;
    cout<<"\n"<<i<<"*"<<a<<"="<<m<<endl;
    i--;
    }
    return 0;

}
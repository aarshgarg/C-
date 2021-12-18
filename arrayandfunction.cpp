#include<iostream.h.h>
using namespace std;
#define Max 100
void main(void)
{
    void output(int a[],int n);// function declare 
    int sumarry(int a[],int n);
    int a[Max];
    int i,n,sum;
    cout<<"How many number enter"<<endl;
    cin>>n;
    cout<<"Enter the number"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];

    }
    cout<<"Output array"<<endl;
    output(a,n);
    sum=sumarry(a,n);
    cout<<endl;
    cout<<"sum of the value so f the array="<<sum;
    void output(int a[],int n)
    {
        cout<<endl;
        for(i=0;i<=n-1;i++)
        {
            cout<<a[i];
        }
    }
    int sumarry(int x[],int y)
    {
        int value=0;
        for(int i=0;i<=)
    }



}
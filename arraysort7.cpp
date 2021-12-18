#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,n;
    int a[100];
    cout<<"enter the number of the array";
    cin>>n;
    cout<<"Enter the element in the array"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        if(a[i]<a[j])
        
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    cout<<"content of the array"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cout<<a[i];
    }
    return 0;
}
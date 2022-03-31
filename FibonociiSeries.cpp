#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i,n;
    cout<<"Print the number n1 and n2"<<"\n"<<"n1="<<n1<<"\n"<<"n2="<<n2<<endl;
    cout<<"Enter the number till which number of fibonccii series=";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        n3=n1+n2;
      n1=n2;
    n2=n3;  
    cout<<"\n"<<n3;
    }
    

}
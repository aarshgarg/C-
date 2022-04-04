#include<iostream>
using namespace std;
void fib(int n)
{
    int n1=0,n2=1,n3;
    for(int i=1;i<=n;i++)
    {
        cout<<n1<<endl;
       
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<endl;
        
    }
    return ;
}
 int main()
 {
     int n;
     cout<<"Enter the number=";
     cin>>n;
     fib(n);

 }
#include<iostream>
using namespace std;
int main()
{
    int funct(int x);
    int i,value;
    for(i=0;i<=10;i++)
    {
        value=funct(i);
        cout<<i<<'\t'<<value<<endl;

    }
}
    int funct(int x)
    {
        static int sum =100;
        
        sum+=x;
        return(sum);
    }

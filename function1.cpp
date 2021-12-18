#include <iostream>
using namespace std;
int  main ()
{
    int square (int); // function declartion
    int x;
    cout<<"enter the  number \n";
    cin>>x;
    for(int i=0;i<=x-1;++i)
    square(i);// function calling 
    }
    int  square (int n) // function defination    
    {
        float value;
        value =n*n;
        cout<<"i="<<n<<"square="<<value<<endl;
        return 0;
    }
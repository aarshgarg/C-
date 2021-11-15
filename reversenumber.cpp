#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numberv we want to the rrevrese it";
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int lastdigit =n%10; // it alaway stake the remainder 
        reverse=reverse*10+lastdigit;
        n=n/10;// it always take the qutioent value bvalu

    }
    cout<<reverse<<endl;
    return 0;
}
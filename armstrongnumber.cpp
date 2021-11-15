#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
    int originalnumber=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        
        n=n/10;

    }
    if(sum==originalnumber)
    {
        cout<<" the number is the arrmstrong"<<endl;

    }
    else{
        cout<<"else the number is not ht armstrong"<<endl;
    }
    return 0;
}

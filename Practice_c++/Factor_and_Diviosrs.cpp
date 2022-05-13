#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number ="<<endl;
    cin>>n;
    int ct=0;
    int sum=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<< i<<" " <<n/i <<endl;
            ct+=1;
            sum+=i;
        
        if(n/i !=i)
        {
            sum+=n/i;
            ct+=1;
        }
    }
    }
    cout<< ct << " " <<sum <<endl;
}

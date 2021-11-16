#include<iostream>
using namespace std;
int main()
{
    // if we write in the cout is only arr then it give the address of the of the first object
    // and if we write the *object then it give the valyue of that first object 
    int arr[]={1,2,3};
    cout<<*arr<<endl;
    int *p;
    p=arr;
    for(int i=0;i<3;i++)
    {
        cout<<p<<endl;
        cout<<*p<<endl; 
        p++;
    }
        return 0;
}
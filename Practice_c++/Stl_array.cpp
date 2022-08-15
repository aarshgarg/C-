#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>a={3,4,6,4,7};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at the second position"<<a.at(3)<<endl;
    cout<<"The a is empty or not"<<a.empty()<<endl;
    cout<<"Element at the first :"<<a.front()<<endl;
    cout<<"Element at the end :"<<a.back()<<endl;
}
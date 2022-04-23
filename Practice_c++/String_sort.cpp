#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="lxnidhwopewqhfjd";
    cout<<str.find("pew")<<endl;
    sort(str.begin(),str.end());

    cout<<str<<endl;
    

}
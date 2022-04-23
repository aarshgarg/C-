#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="hsauliaqwopzxc";

    transform (s1.begin(),s1.end(),s1.begin(), ::toupper);

    cout<<s1<<endl;


}
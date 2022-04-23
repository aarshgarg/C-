#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string s1="32683489351";
    sort (s1.begin(),s1.end(), greater<char>());
    cout<<s1<<endl;
}
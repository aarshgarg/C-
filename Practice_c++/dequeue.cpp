#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> a;
    a.push_back(6);
    a.push_front(8);
    cout<<endl;
    cout<<"Print the first element"<<a.at(1);

    for(int i:a)
    {
        cout<<i<<" "<<endl;

    }
    cout<<" front"<<a.front();
    cout<<"end"<<a.back();
    cout<<"Before erase"<<a.size()<<endl;
    a.erase(a.begin(),a.begin()+1);
    cout<<"After erase"<<a.size()<      <endl;

}

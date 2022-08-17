#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int > maxi;
    priority_queue<int,vector<int>,greater <int>> mini;

    maxi.push(2);
    maxi.push(5);
    maxi.push(1);

    cout<<"MAx element print";
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(4);
    mini.push(5);
    mini.push(2);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Empty ha ya nhi"<<maxi.empty();
    return 0;

}
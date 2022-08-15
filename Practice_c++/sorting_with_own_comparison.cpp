#include<iostream>
#include<algorithm>
using namespace std;

struct point{
    int x,y;
};
bool mycmp(point p1,point p2)
{
    return(p1.x<p2.x);
}
int main()
{
    point arr[]={{4,5},{3,2},{7,1}};
    int n=sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n,mycmp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].x<<","<<arr[i].y;
    }

    return 0;
}
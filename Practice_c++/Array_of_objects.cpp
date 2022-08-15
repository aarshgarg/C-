#include<iostream>
using namespace std;
class shopItem{
    int a,b;
int setItem(int x,int y)
{
    a=x;
    b=y;
}
void getdata()
{
    cout<<"The value"<<endl;
}
};
int main()
{
    int size;
    shopItem *ptr=new shopItem[size];

    return 0;
}
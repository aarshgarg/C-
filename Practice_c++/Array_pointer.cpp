#include<iostream>
using namespace std;

class shopitem
{
     public:
int id;
int price;
void setdata(int a,int b)
{
    id=a;
    price=b;
}
void getdata(void)
{
    cout<<"the id of the item is ="<<id<<endl;
    cout<<" the price of the item is= "<<price<<endl;
}

};
int main()
{
    int size=3;
    shopitem *ptr= new shopitem[size];
    shopitem *ptrTemp=ptr;
    int p,q;
    for(int i=1;i<size;i++)
    {
     cout<<"Enter the id and price of the product="<<i<<endl;
     cin>> p>>q;   
     ptr->setdata(p,q);
     ptr++;
    }
    for(int i=1;i<size;i++)
    {
        cout<<"Item Number="<<i<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    return 0;

}
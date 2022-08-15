#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
    public:
    int setdata(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    void getdata()
    {
        cout<<"the value opf the realdata="<<real<<endl;
        cout<<"The value of the imaginaery="<<imaginary<<endl;
    }
};
int main()
{
    complex *p=new complex;
    p->setdata(1,66);
    p->getdata();
   complex *ptr1 = new complex[4]; 
    ptr1->setdata(1, 4); 
    ptr1->getdata();

    return 0;
}
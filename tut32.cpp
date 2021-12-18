#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b=9){
        data1=a;
        data2=b;
    }
    void printdata();
};
     void simple:: printdata(){
      cout<<"the print the value of the "<<data1<<","<<data2<<endl;   
     }
int main()
{
simple c1(1,4);
c1.printdata();
return 0;
}
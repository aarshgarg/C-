#include<iostream>
using namespace std;

class base{
    int data1;// private by default not inhertiable 
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base:: setdata(void){
    data1=10;
    data2=20;

}
int base:: getdata1(){

    return data1;
}
int base:: getdata2(){
return data2;
    
}
class derived : public base{
    int data3;
    public:
    void process ();
    void display();

};

}
#include<iostream>
using namespace std;
class t;
class y;
class x{
    int data;
    public:
    void setvalue(int value){
        data =value;
    }
    friend void add(x,y,t);
};
class y{
    int num;
    
    public:
    void setvalue(int value){
        num=value;
    }
    friend void add(x,y,t);

};
class t{

    int val;
    public:
    void setvalue(int g){
        val=g;
    }
    friend void add(x,y,t);
};

void add ( x o1,y o2,t o3){
    cout<<" summing data of x and y and t  objects "<<o1.data+o2.num+o3.val<<endl;

}
int main()
{
    x a1;
    a1.setvalue(5);
    y a2;
    a2.setvalue(15);
    t a3;
    a3.setvalue(9);
    add(a1,a2,a3);
    return 0;
}
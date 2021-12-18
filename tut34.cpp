#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found,complier suplies its own copy constructor
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is" << a << endl;
    }
};
int main()
{
    number x, y(34), z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(z); //copy constructor invoked
    z1.display();
    z2 = z; //copy consrtructor not called
    z2.display();
    number z3 = z; // now run
    z3.display();
    return 0;
}
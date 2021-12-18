#include <iostream>
using namespace std;
//forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    //individualy makes the functions as the friend

    // friend int calculator ::sumrealcomplex(complex, complex);
    // alter : declaring the whole entire claculator claas afriend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumber();
    o2.setnumber(5, 7);
    o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "  the sum of the real part of o1 and o2" << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "  the sum of the complex part of o1 and o2" << resc << endl;
    return 0;
}
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int, int); // constructor declared
    void printnumber()
    {
        cout << "your number is the " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x, int y) //-----> this is a parametrised constructer as it  take 2 paprameters
{
    a = x;
    b = y;
}
int main()
{
    //implicit call
    complex a(4, 6);
    //explicit call
    complex b=complex(5, 7);
    a.printnumber();
    b.printnumber();
    return 0;
}
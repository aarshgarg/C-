#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;
    int c;
    int d;

public:
    // creating the constructur
    /* constructor is aspecial member function with same name as the class. it is automatic invoked means auto matic 
    called  whenever an object is created*/
    // it is used to intialize the objectsb of its class
    complex(void); // constructor declared
    void printnumber()
    {
        cout << "your number is the " << a << "+" << b << "i" << endl;
        cout << "your number is the " << c << "+" << d << "i" << endl;
    }
};
complex ::complex(void) //-----> this is a default constructer as it not take any paprameters
{
    a = 20;
    b = 10;
    c = 30;
    d = 40;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
/*charactercstis of constructor 
1. it should be declared in the public section of claas
2. they ar automatically invoked whenever the object is create 
3. they cannot return value and do not have return types 
4. it can have default arguments 
5. we cannot refer to  their addresses 
6. default values means that the which function we declared automatic value is compile*/
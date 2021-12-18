#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata() //get data is used to the print the data
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is" << c << endl;
        cout << "the value of d is" << d << endl;
        cout << "the value of e is" << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee aarsh;
    aarsh.d = 34;
    aarsh.e = 89;
    aarsh.setdata(1, 2, 3);
    aarsh.getdata();
    return 0;
}
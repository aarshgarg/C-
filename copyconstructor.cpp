#include<iostream>
using namespace std;
class emp
{
    public:
    int x;
    emp(int a) // parametrised constructor 
    {
        x=a;
    }
    emp(emp&i)  // copy constructor
    {
        x=i.x;
    }
};
int main()
{
    emp a1(200); // para,etrised const call
    emp a2(a1);  // copy constructor call
    cout<< a2.x;
    return 0;
}
    



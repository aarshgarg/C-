#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        
        cout << " enter the id" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << " the id of the employee is the " << id << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}
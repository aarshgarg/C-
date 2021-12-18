#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; // default value is 0 when static automatic the value is start from 0
public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << " the id is this employee is " << id << " and this is employee number " << count << endl;
    }
};
int employee ::count = 1000;
int main()
{
    employee aarsh, harsh, lovish;
    aarsh.setdata();
    aarsh.getdata();
    harsh.setdata();
    harsh.getdata();
    lovish.setdata();
    lovish.getdata();
    return 0;
}

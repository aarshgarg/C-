#include<iostream>
using namespace std;
class parent
{
    public:
    int id; // instance variable
    string name;
    void insert(int n, string x)
    {
        id=n;
        name=x;
    }
    void display()
    {
        cout<<id<<""<<name<<endl;
    }
};
int main()
{
    parent s1;
    parent s2;
    s1.insert(101,"Aarsh");
    s2.insert(102,"Fiza");
    s1.display();
    s2.display();
    return 0;

}
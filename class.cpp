#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    int salary ;
    string name;
    void display()
    {
        cout<<"print the data="<<id<<"\t"<<"salary="<<salary<<"\t"<<name<<endl;
    }
    

};
int main()
{
    student s1;
    student s2;
    s1.id=101;
    s1.salary=11111;
    s1.name="Aarsh";
    s2.id=102;
    s2.salary=127227;
    s2.name="gagan";
    s1.display();
    s2.display();
    return 0;

}
#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    float salary ;
    employee(int inpid){
        id=inpid;
        salary=45.5;

    }
    employee(){}//its used that when we can make the derived class default constructor 
    void displaydata()
    {
        cout<<"print the salary of the employee"<<salary<<endl;
    }

};
class programmer : public employee
{
public:
int languagecode;
programmer(int inpid){
    languagecode=9;
    id=inpid;
}
void getdata()
{

}
};


#include<iostream>
using namespace std;
int main()
{
    void func1(void);

    cout<< "hello"<<endl;
    cout<<"world"<<endl;
    func1();

}
void func1 (void)
{
    void func2(void);
    cout<<"good evening";
    func2();
}
void func2(void)
{
    cout<<"runnn"<<endl;
}
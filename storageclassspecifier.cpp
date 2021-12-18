#include<iostream>
using namespace std;
int main()
{
    void func(int i);
    int i=1; // this i belong to the main function
    func(3); 
   // func(4);//function calling
    cout<<"i="<<i<<endl;

}
void func(int i)
{
    i=i*10;
    {
        // here is the compound statement with another i 
        int i;
        i=3;
        cout<<"i="<<i<<"(in inner most block)";
        cout<<endl;   
         }

cout<<"i="<<i<<"(parameter the function f)";
//cout<<"i="<<i<<"(parameter the 2nd function f)";
cout<< endl;
//return 0;
}
/* in this program the identifier i is used fir three distinct variable */
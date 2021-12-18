#include<iostream>
using namespace std;
class date
{
    private:
    int day;
    int month ;
    int year;
    public:
    void getdata(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void display()
    {
        cout<<"Today date is ="<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
 int main()
 {
    class date today;
    //int d1,m1,y1; 
    //d1=10;
    //m1=11;
    //y1=2002;
        today.getdata(22,11,2002);
        today.display();
        return 0;
 }
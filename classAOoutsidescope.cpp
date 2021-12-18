#include<iostream>
using namespace std;
class sample
{
    private: 
    int x;
    int y;
    public:
    void getdata();
    void display();
    int sum();
    int diff();
    int multi();
    int division();
};

void sample::getdata()
{
    cout<<"Enter the number "<<endl;
    cin>>x>>y;

}
void sample :: display()
{
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"x+y="<<sum()<<endl;
    cout<<"x-y="<<diff()<<endl;
    cout<<"x*y="<<multi()<<endl;
    cout<<"x/y="<<division()<<endl;

}

int sample :: sum()
{
    return(x+y);
}
int sample :: diff()
{
    return(x-y);

}
int sample:: multi()
{
    return(x*y);

}
int sample :: division()
{
    return(x/y);
}
 int main()
 {
      sample tow;
     tow.getdata();
     tow.display();
     tow.sum();
     tow.diff();
     tow.multi();
     tow.division();
    return 0;
      }
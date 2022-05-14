#include<iostream>
using namespace std;
class student
{
  protected:
  int roll_no;
  public:
  void set_number(int n)
  {
      roll_no=n;

  }  
  void get_number(void)
  {
      cout<<"The Roll number="<<roll_no<<endl;
  }
};

class test: virtual public student
{
    protected:
    float math;
    float physics;
    public:
    void set_marks(float m1, float m2)
    {
      math=m1;
      physics=m2;
    }
    void get_marks(void)
    {
        cout<<"your result is here"<<endl
        << "Math="<<math<<endl
        << "Physics="<<physics<<endl;
    }
};

class sports: virtual public student
{
 protected:
 float score;
 public:
 void set_score(float sc )
 {
     score=sc;
 }
 void get_score(void)
 {
     cout<<"The score of the ="<<score<<endl;
 }
};

class result: public test,public sports
{

 float total;
 public:
 void display()
 {
 total=math+physics+score;
  get_number();
  get_marks();
  get_score();
  cout<<" The total is="<<total<<endl;
 }
};

int main()
{
  result s1;
    s1.set_number(4200);
    s1.set_marks(78.9, 99.5);
    s1.set_score(9);
    s1.display();
    return 0;

}
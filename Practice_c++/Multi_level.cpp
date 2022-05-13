#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int x);
    void get_roll_number(void);
};
void student::set_roll_number(int n)
{
    roll_number=n;

}
void student ::get_roll_number()
{
    cout<<"The roll number is="<<roll_number<<endl;
}

class exam : public student
{
protected:
 float maths;
 float physics;
 public:
 void set_marks(float,float);
 void get_marks(void);
};

void exam::set_marks(float n1,float n2)
{
    maths=n1;
    physics=n2;
}
void exam::get_marks()
{
 cout<<"The marks of the maths and physics"<<maths<<"\n"<<physics<<endl;
}

class result:public exam
{
  
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is =" << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
 result aarsh;
 aarsh.set_roll_number(22);
 aarsh.set_marks(43,44);
 aarsh.display_results();
 return 0;
}
#include <iostream> 

using namespace std;   

class base { 

public:  //this->

    virtual void print() //ptr ->

    { 

        cout << "print base class" << endl; 

    } 

  void show() 

    { 

        cout << "show base class" << endl; 

    } 

};   

class derived : public base { 

public:

  virtual void print()

    { 

        cout << "print derived class" << endl; 

    }   

 void show() 

    { 

        cout << "show derived class" << endl; 

    } 

};   

int main() 

{ 

    base* bptr; //A

    derived d;  //B

    bptr = &d; 

    // virtual function, binded at runtime 

    bptr->print(); 

    // Non-virtual function, binded at compile time 

    bptr->show(); 

} 
#include <iostream>  
using namespace std;  
void change(int data);  // function declare 
int main()  
{ 
    
    // the value in the main function is print 
    // bcz it refer to the local value  
int data = 3;  // call by value 
change(data);  
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  
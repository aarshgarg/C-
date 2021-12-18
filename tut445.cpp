#include <iostream>

using namespace std;

int main()
{
   int list[5] = {9, 8, 7, 6, 5};

   int *p;

   p = list; //points to 1st entry
   cout << "the address p" << p << endl;

   p = &list[0]; //points to 1st entry
   cout << " the value  p" << *p << endl;

   p = &list[1]; //points to 2nd entry
   cout << " the ad p" << p << endl;

   p = list + 2; //points to 2nd entry
   cout << " the ad p" << p << endl;
}
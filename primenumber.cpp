#include <iostream>
using namespace std;

int main()
{
    int a,  x;
    cout << "Enter number to check it = ";
    cin >> a;
   // b = a / 2;

    for (int i = 1; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            x = i;
        }
    }
    cout << "\n";

    if (x == 1)
    {
        cout << a << " is Prime";
    }
    else
    {
        cout << a << " is not Prime";
    }

    return 0;
}
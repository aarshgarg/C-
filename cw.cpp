#include <iostream>
using namespace std;

string kangaroo(int, int, int, int);

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2);
    return 0;
}

string kangaroo(int x1, int v1, int x2, int v2)
{
    string result;
    if (x1 == x2)
        result = "YES";

    else if (x1 > 10000 || x2 > 10000)
        result = "NO";

    else
    {
        result = kangaroo(x1 + v1, v1, x2 + v2, v2);
    }
    return result;
}

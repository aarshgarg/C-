#include <iostream>
#include <math.h>
using namespace std;
class point
{
    friend void diffrence(point, point);
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "the point is:" << x << "," << y << endl;
    }
};
void diffrence(point o1, point o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    double dist = sqrt((x_diff) * (x_diff) + (y_diff) * (y_diff));
    {
        cout << "distance is:" << dist << "units" << endl;
    }
}
int main()
{
    point g1(5, 6), g2(7, 8);
    g1.displaypoint();
    g2.displaypoint();
    diffrence(g1, g2);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements in array=";
        cin >> arr[i];
    }
        int cureent = 0;
        for (int i = 0; i < n; i++)
        {
            cureent = 0;
            for (int j = i; j < n; j++)
            {

                cureent += arr[j];
                cout << cureent << endl;
            }
        }
        return 0;
    }
    // number of the sub array n*(n+1)/2
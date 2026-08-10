#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) == n || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (i == j || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
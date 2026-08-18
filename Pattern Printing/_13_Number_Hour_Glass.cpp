#include <iostream>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num = 1;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        num = 1;
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i + 2; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
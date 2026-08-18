#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        num = i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num--;
        }
        num = 2;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        num = n - i - 1;
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << num;
            num--;
        }
        num = 2;
        for (int j = 1; j <= n - i - 2; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
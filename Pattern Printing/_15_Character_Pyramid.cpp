#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        ch = ch - 2;
        for (int j = i; j >= 1; j--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}
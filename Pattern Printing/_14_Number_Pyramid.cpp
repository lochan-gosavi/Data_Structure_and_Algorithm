#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        num = i;
        for (int j = i; j >= 1; j--)
        {
            cout << num;
            num--;
        }
        cout << endl;
    }
}

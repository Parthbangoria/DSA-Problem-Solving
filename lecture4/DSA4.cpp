#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = (n - i); j > 0; j--)
        {
            cout << "  ";
        }
        cout << "*";
        for (int k = 0; k < i; k++)
        {
            cout << "    ";
        }
        cout << "*";

        cout << endl;
    }
    for (int i = n; i > -1; i--)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "  ";
        }
        cout << "*";
        for (int k = i - 1; k >= 0; k--)
        {
            cout << "    ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // int n;
    // cout << "enter the number :" << endl;
    // cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << "n is even nuber " << endl;
    // }
    // else
    // {
    //     cout << "n is odd number " << endl;
    // }
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        // char ch = 'A';
        // for (int j = (n - i); j > 0; j--)
        // {
        //     cout << "" << " ";
        // }
        // for (int k = 0; k < i; k++)
        // {
        //     cout << ch << " ";
        //     ch += 1;
        // }
        // cout << endl;
    }
    return 0;
}

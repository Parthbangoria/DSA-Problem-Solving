#include <iostream>
using namespace std;

// int digitSum(int n)
// {
//     if (n / 10 == 0)
//     {
//         return n % 10;
//     }
//     else
//     {
//         return n % 10 + digitSum(n / 10);
//     }
// }

int factorial(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    int r;
    cin >> n;
    cin >> r;
    int ncr = factorial(n) / factorial(r) / factorial(n - r);
    cout << ncr;

    // int n;
    // cin >> n;
    // cout << digitSum(n) << endl;
    return 0;
}
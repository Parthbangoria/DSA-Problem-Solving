#include <iostream>
#include <cmath>
using namespace std;

int printDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;

        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}

bool isArmstrong(int n)
{
    int copyN = n;
    int sumofcubes = 0;
    while (n != 0)
    {
        int dig = n % 10;
        sumofcubes += (dig * dig * dig);
        n /= 10;
    }
    if (copyN == sumofcubes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}

int gcdRec(int a, int b)
{

    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}
int lcm(int a, int b)
{
    int gcd = gcdRec(a, b);
    return (a * b) / gcd;
}

int main()
{
    cout << lcm(20, 28) << endl;
    return 0;
}
#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    if (n / 2 == 0)
    {
        cout << n % 2 << "";
    }
    else
    {
        decimalToBinary(n / 2);
        cout << n % 2 << "";
    }
}

int binaryToDecimal(int n, int pow)
{
    if (n / 10 == 0)
    {
        return n * pow;
    }
    else
    {
        return ((n % 10) * pow) + binaryToDecimal(n / 10, pow * 2);
    }
}
int main()
{
    int n;
    int pow;
    cin >> n;
    pow = 1;

    // pow = to_string(n).length();
    // cout << pow << endl;
    cout << binaryToDecimal(n, pow) << endl;

    // decimalToBinary(n);

    return 0;
}
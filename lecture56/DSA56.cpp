#include <iostream>
#include <string>
using namespace std;

// class ABC
// {
// public:
//     ABC()
//     {
//         cout << "constuctor\n";
//     }

//     ~ABC()
//     {
//         cout << "destuctor\n";
//     }
// };

class A
{
public:
    int x = 0;
    void incr()
    {
        x++;
        cout << x << endl;
    }
};

int main()
{
    

    return 0;
}
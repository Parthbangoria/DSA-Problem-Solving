#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int maxsum = 0;
    for (int st = 0; st < n; st++)
    {
        int currentsum = 0;
        for (int end = st; end < n; end++)
        {
            currentsum += arr[end];
            maxsum = max(currentsum, maxsum);
        }
    }
    cout << maxsum << endl;
    return 0;
}
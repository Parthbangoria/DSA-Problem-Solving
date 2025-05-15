#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector<int> &paints, int n, int m, int maximumAllowedValue)
{
    int size = paints.size();
    int painter = 1;
    int paint = 0;
    for (int i = 0; i < size; i++)
    {
        if (paints[i] > maximumAllowedValue)
        {
            return false;
        }
        if (paint + paints[i] <= maximumAllowedValue)
        {
            paint += paints[i];
        }
        else
        {
            painter++;
            paint = paints[i];
        }
    }

    return painter > m ? false : true;
}

int minTimeToPaint(vector<int> &paints, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    int max_value = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += paints[i];
        max_value = max(paints[i], max_value);
    }
    int st = max_value;
    int end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(paints, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(nums, n, m) << endl;

    return 0;
}
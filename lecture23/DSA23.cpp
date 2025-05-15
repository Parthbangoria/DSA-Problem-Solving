#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool isValid(vector<int> nums, int n, int c, int minimumValidDistance)
{

    int cows = 1;
    int previousStall = nums[0];
    for (int i = 0; i < n; i++)
    {
        if ((nums[i] - previousStall) >= minimumValidDistance)
        {
            cows++;
            previousStall = nums[i];
        }
        if (cows == c)
            return true;
    }

    return false;
}

int minDistance(vector<int> &nums, int n, int c)
{
    if (c > n)
    {
        return -1;
    }
    sort(nums.begin(), nums.end());
    int st = nums[0];
    int end = nums[n - 1];
    int ans = -1;
    if (c == 2)
    {
        return (end - st);
    }
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(nums, n, c, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << minDistance(arr, 5, 3) << endl;
    return 0;
}
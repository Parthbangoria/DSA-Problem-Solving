#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum_bruteforce(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
};

vector<int> pairsum_optimal(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return (ans);
        }
    }
};

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairsum_bruteforce(nums, target);

    cout << ans[0] << ", " << ans[1];
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maximumAllowedPages)
{
    int stu = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumAllowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= maximumAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{

    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum; // range of possible ans

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }
    // return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
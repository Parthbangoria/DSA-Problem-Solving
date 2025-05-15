#include <iostream>
#include <vector>
using namespace std;

int binarySearchIterative(vector<int> numbers, int target)
{

    int st = 0;
    int end = numbers.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (numbers[mid] == target)
        {
            return mid;
        }
        else if (numbers[mid] < target)
        {
            st = mid + 1;
        }
        else if (numbers[mid] > target)
        {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(vector<int> numbers, int target, int st, int end)
{
    int mid = st + (end - st) / 2;
    if (st <= end)
    {
        if (numbers[mid] == target)
        {
            return mid;
        }
        else if (numbers[mid] < target)
        {
            return binarySearchRecursive(numbers, target, mid + 1, end);
        }
        else if (numbers[mid] > target)
        {
            return binarySearchRecursive(numbers, target, st, mid - 1);
        }
    }
    return -1;
}

int main()
{

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;

    // cout << binarySearchIterative(arr1, tar1) << endl;
    // cout << binarySearchIterative(arr2, tar2) << endl;

    cout << binarySearchRecursive(arr1, tar1, 0, arr1.size()) << endl;
    cout << binarySearchRecursive(arr2, tar2, 0, arr2.size()) << endl;

    return 0;
}
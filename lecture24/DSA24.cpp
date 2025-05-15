#include <iostream>
#include <vector>
using namespace std;

// int swap(int *i, int *j)
// {
//     int temp = *i;
//     *i = *j;
//     *j = temp;
//     return 0;
// }

void bubbleSort(int nums[], int n)
{
    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        cout << "Iteration No.:" << i << endl;
        if (!isSwap)
        {
            return;
        }
    }
}

void selectionSort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(nums[i], nums[smallestIndex]);
    }
}

void insertionSort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = nums[i];
        int prev = i - 1;
        while (prev >= 0 && nums[prev] > curr)
        {
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = curr; // placing the curr el in correct position
    }
}

int main()
{
    int n = 5;
    int nums[] = {4, 1, 5, 2, 3};
    insertionSort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
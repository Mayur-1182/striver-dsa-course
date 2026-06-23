#include <bits/stdc++.h>
using namespace std;

// void sortZeroOneTwo(vector<int> &nums)
// {
//     vector<int> temp = {0, 0, 0};
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 0)
//         {
//             temp[0]++;
//         }
//         else if (nums[i] == 1)
//         {
//             temp[1]++;
//         }
//         else if (nums[i] == 2)
//         {
//             temp[2]++;
//         }
//     }
//     nums = {0};

//     for (int i = 0; i < temp.size(); i++)
//     {
//         for (int j = 0; j < temp[i]; j++)
//         {
//             nums.push_back(i);
//         }
//     }
// }

void printArray(vector<int> nums)
{
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << "  ";
    }
}

void sortZeroOneTwo(vector<int> &nums)
{
    priority_queue<int> pq;
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        pq.push(nums[i]);
    }
    for (int i = len - 1; i >= 0; i--)
    {
        nums[i] = pq.top();
        pq.pop();
    }
}

void dutchAlgorithm(vector<int> &a)
{
    int len = a.size();
    int low = 0;
    int mid = 0;
    int high = len - 1;

    while (mid < high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {0, 2, 1, 0, 2, 1, 0, 2, 1, 1, 0, 0};
    dutchAlgorithm(nums);
    printArray(nums);
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    return 0;
}
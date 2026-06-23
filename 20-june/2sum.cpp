#include <bits/stdc++.h>
using namespace std;

string twoSum(int arr[], int len, int target)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; i++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "i : " << i << " j : " << j << endl;
                return "YES";
            }
        }
    }
}

vector<int> twoSum2(vector<int> &nums, int target)
{
    int len = nums.size();
    map<int, int> ans;
    for (int i = 0; i < len; i++)
    {
        int ele = nums[i];
        int more = target - ele;
        if (ans.find(more) != ans.end())
        {
            return {ans[more], i};
        }
        ans[ele] = i;
    }
    return {-1, -1};
}

string twoSum3(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
        else if (sum == target)
        {
            cout << "sum found : " << nums.size() - 1 - left << " " << nums.size() - 1 - right << endl;
            return "YES";
        }
    }
    return "NO";
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5};
    // int len = sizeof(arr) / sizeof(arr[0]);
    // cout << twoSum(arr, len, 7);
    vector<int> nums = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << twoSum3(nums, 16);
    // vector<int> ans = twoSum2(nums, 9);
    // for (auto it : ans)
    // {
    //     cout << it << endl;
    // }

    return 0;
}
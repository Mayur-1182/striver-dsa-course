#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> nums)
{
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << "  ";
    }
}

int majorityElement(vector<int> a)
{
    int len = a.size();
    int max = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < len; i++)
    {
        mpp[a[i]]++;
    }
    for (auto it : mpp)
    {
        cout << "it : " << it.first << " " << it.second << endl;
        if (it.second > max)
        {
            max = it.second;
        }
    }
    return max;
}

vector<int> findMajority(vector<int> &arr)
{
    int len = arr.size();
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < len; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > len / 3)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}

int buyAndSellStock(vector<int> &a)
{
    int len = a.size();
    int mini = a[0];
    int maxProfit = 0;
    int cost = 0;
    for (int i = 1; i < len; i++)
    {
        cost = a[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, a[i]);
    }
    return maxProfit;
}
int main()
{
    // vector<int> arr = {
    //     0, 1, 2, 3, 2, 1, 7, 5, 3, 4, 2, 3, 5, 1, 4, 2, 8, 5, 4, 2, 3, 2, 4, 6, 9};
    // vector<int> ans = findMajority(arr);
    // for (int it = 0; it < ans.size(); it++)
    // {
    //     cout << " ** " << it << endl;
    // }

    // cout << majorityElement(arr);
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << buyAndSellStock(arr);

    return 0;
}
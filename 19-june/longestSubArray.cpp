#include <bits/stdc++.h>
using namespace std;

int longestSubArray(int arr[], int len, int k)
{
    map<int, int> mpp;
    long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
    }
}

void setZeroMatrix(vector<vector<int>> &arr)
{
    vector<pair<int, int>> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                temp.push_back({i, j});
            }
        }
        cout << endl;
    }
    for (auto it : temp)
    {
        for (int i = 0; i < arr[0].size(); i++)
        {
            arr[it.first][i] = 0;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i][it.second] = 0;
        }
    }
}

void findLeaderFromArray(int arr[], int len)
{
    vector<int> temp;
    bool b = true;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] <= arr[j])
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            temp.push_back(arr[i]);
        }
        b = true;
    }
    for (auto it : temp)
    {
        cout << it << " ";
    }
}

void leaderFromArray(vector<int> a)
{
    int len = a.size();
    int temp = 0;
    int max = 0;
    vector<int> ans;
    for (int i = len - 1; i >= 0; i--)
    {
        if (max < a[i])
        {
            ans.push_back(a[i]);
            max = a[i];
        }
    }
    cout << "Leaders : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[] = {4, 7, 1, 0, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    // findLeaderFromArray(arr, len);
    vector<int> arr1 = {4, 7, 0, 1};
    leaderFromArray(arr1);
    return 0;
}
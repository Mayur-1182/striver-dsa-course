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

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> temp = nums;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mpp.find(nums[i]) == mpp.end())
        {
            cout << " if state i : " << i << endl;
            mpp[nums[i]] = i;
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        ans.push_back(mpp[temp[i]]);
    }
    return ans;
}

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int len = nums.size();
    vector<int> ans;
    set<int> st;
    for (int i = 0; i < len; i++)
    {
        cout << "insert loop" << endl;
        st.insert(nums[i]);
    }
    for (int i = 0; i < len; i++)
    {
        cout << "for loop second" << endl;
        if (ans.size() == 2)
        {
            cout << "first if block" << endl;
            break;
        }

        if (st.find(i + 1) == st.end())
        {
            cout << "sec if block" << endl;
            ans.push_back(i + 1);
        }
    }
    return ans;
}

bool isToeplitzMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int diagonalEle = matrix[0][0];
    int j = 0;
    cout << "row : " << row << " col : " << col << " diagonalEle:" << diagonalEle << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "i : " << i << " j : " << j << " " << endl;
        if (j >= col)
        {
            break;
        }
        if (matrix[i][j] != diagonalEle)
        {
            return false;
        }

        j++;
    }
    return true;
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
    // vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    // vector<int> ans = findDisappearedNumbers(arr);
    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }
    vector<vector<int>> arr = {{18}, {22}};
    cout << isToeplitzMatrix(arr);

    return 0;
}
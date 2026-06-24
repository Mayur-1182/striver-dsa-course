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

int maxSumSubArray(vector<int> a)
{
    int maxsum = 0;
    int sum = 0;
    int len = a.size();
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            sum = sum + a[j];
            maxsum = max(maxsum, sum);
        }
        sum = 0;
    }
    return maxsum;
}

// kadanes algorithm

int kadanesAlgorithm(vector<int> a)
{
    int len = a.size();
    int sum = 0;
    int maxSum = 0;
    vector<int> maxSumEle;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
        maxSum = max(sum, maxSum);
        maxSumEle.push_back(a[i]);
        if (sum < 0)
        {
            sum = 0;
            maxSumEle.clear();
        }
    }
    for (auto it : maxSumEle)
    {
        cout << it << " ";
    }
    cout << endl;
    return maxSum;
}

int main()
{
    vector<int> a = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << kadanesAlgorithm(a);

    return 0;
}
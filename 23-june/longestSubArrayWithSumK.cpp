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

int longestSubArray(vector<int> a, int target)
{
    int len = a.size();
    int longest = 0;
    map<long long, int> mpp;
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + a[i];
        if (sum == target)
        {
            longest = max(longest, i + 1);
        }
        int rem = sum - target;
        // If the key is found, .find() returns the exact memory address of that key (e.g., 0x0042).
        // If the key is not found, .find() returns the dead - end address : mpp.end()(e.g., 0x0099).
        if (mpp.find(rem) != mpp.end())
        {
            int temp = i - mpp[rem];
            longest = max(longest, temp);
        }
        if (mpp.find(sum) == mpp.end())
        {
            // if we have multiple zeros in array then it is edge case and solution gets fails,if sum is same then it will update the same value multiple times
            mpp[sum] = i;
        }
    }
    return longest;
}

int longestSubArrayWithSumOptimal(vector<int> a, int target)
{
    int len = a.size();
    int right = 0;
    int left = 0;
    long sum = 0;
    int longest = 0;
    while (right < len)
    {
        sum += a[right];
        if (sum > target)
        {
            left++;
            longest = max(longest, right + 1);
        }
        right++;
    }
}
int main()
{
    vector<int> a = {1, 1, 0, 0, 0, 0, 0};
    int ans = longestSubArray(a, 0);
    cout << "ans : " << ans << endl;

    return 0;
}
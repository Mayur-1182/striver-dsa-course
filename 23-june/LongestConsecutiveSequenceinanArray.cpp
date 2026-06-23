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

void longestSequence(vector<int> a)
{
    int len = a.size();
    int maxCnt = 0;
    int cnt = 1;
    sort(a.begin(), a.end());
    for (int i = 0; i < len - 1; i++)
    {
        if (a[i] + 1 == a[i + 1])
        {
            cout << a[i] << " ";
            cnt++;
            maxCnt = max(maxCnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << "max cnt : " << maxCnt << endl;
}
int longestSequenceHashing(vector<int> a)
{
    int len = a.size();
    int longest = 0;
    int lastsmaller = INT_MAX;
    int cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < len; i++)
    {
        if (a[i] - 1 == lastsmaller)
        {
            cnt += 1;
            lastsmaller = a[i];
        }
        else if (a[i] != lastsmaller)
        {
            cnt = 1;
            lastsmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int longestSequenceSet(vector<int> a)
{
    int len = a.size();
    int cnt = 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < len; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x++;
                cnt++;
            }
        }
        longest = max(longest, cnt);
    }
    return longest;
}
int main()
{
    vector<int> arr = {9, 7, 6, 5, 2, 3, 6, 4, 1, 5, 3, 0};
    cout << "longest sequence : " << longestSequenceSet(arr);
    set<int> st;
    st.insert(99);

    return 0;
}
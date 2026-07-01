#include <bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string> &patterns, string word)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < word.length(); i++)
    {
        if (!mpp[word[i]])
        {

            mpp[word[i]] = i;
        }
    }
    int w = 0;
    int cnt = 0;
    int wordLen = word.length();
    int len = patterns.size();
    for (int i = 0; i < len; i++)
    {
        w = mpp.find(patterns[i][0]) != mpp.end() ? mpp[patterns[i][0]] : 0;
        for (int j = 0; j < patterns[i].length(); j++)
        {
            // string curWord=patterns[i];
            cout << "sec for loop : i " << i << " j : " << j << " " << patterns[i][j] << endl;
            if (word[w] == patterns[i][j])
            {
                w++;
                if (w == patterns[i].length())
                {
                    cnt++;
                }
            }
        }
        w = 0;
        cout << endl;
    }
    return cnt;
}

int lengthOfLongestSubstring(string s)
{
    int len = s.length();
    int maxLen = 0;
    int left = 0;
    int right = 0;
    unordered_map<char, int> mpp;
    while (right < len)
    {
        cout << "while loop" << endl;
        if (mpp.find(s[right]) == mpp.end())
        {

            cout << "fall in if block" << endl;
            mpp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        else
        {
            mpp.erase(s[left]);
            left++;
        }
        right++;
    }
    return maxLen;
}

int removeDuplicates(vector<int> &nums)
{
    int len = nums.size();
    map<int, int> mpp;
    for (int i = 0; i < len; i++)
    {
        mpp[nums[i]]++;
    }
    int k = 0;
    for (auto it : mpp)
    {
        int cnt = it.second > 2 ? 2 : it.second;

        cout << it.first << " " << it.second << " " << cnt << endl;
        for (int i = 0; i < cnt; i++)
        {
            nums[k] = it.first;
            k++;
        }
    }
    return len - (len - k);
}

int main()
{
    // vector<string> strs = {"a", "abc", "bc", "b"};
    // cout << lengthOfLongestSubstring("abcabcdaef");
    vector<int> a = {0, 0, 0, 1, 1, 1, 1, 2, 3, 3, 3, 4};
    cout << "ans : " << removeDuplicates(a) << endl;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " " << endl;
    // }

    return 0;
}
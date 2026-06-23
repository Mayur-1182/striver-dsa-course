#include <bits/stdc++.h>
using namespace std;

void moveZeroEnd(int arr[], int len)
{
    // int z = -1;
    // for (int i = 0; i < len; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         z = i;
    //         break;
    //     }
    // }
    // cout << "z inx : " << z << endl;
    // int j = 0;
    // for (int i = z + 1; i < len; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         arr[z] = arr[i];
    //         arr[i] = 0;
    //         z++;
    //     }
    // }

    int count = 0;

    for (int i = 0; i < len; i++)
    {

        // If the current element is non-zero
        if (arr[i] != 0)
        {

            // Swap the current element with
            // the 0 at index 'count'
            swap(arr[i], arr[count]);
            // Move 'count' pointer to the
            // next position
            count++;
        }
    }
}

vector<int> findMajority(vector<int> &arr)
{
    unordered_map<int, int> mpp;
    int len = arr.size();
    vector<int> max;
    for (int i = 0; i < len; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > len / 3)
        {
            max.push_back(it.first);
        }
    }
    return max;
}

string validParenteses(string s)
{
    int len = s.length();
    if (len % 2 == 1)
        return "NO";
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{')
        {
            st.push('{');
        }
        else if (s[i] == '[')
        {
            st.push('[');
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (st.empty())
    {

        return "YES";
    }
    return "NO";
}

int validLongestParentheses(string s)
{
    int len = s.length();
    int cnt = 0;
    int maxCnt = 0;
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{')
        {
            st.push('{');
        }
        else if (s[i] == '[')
        {
            st.push('[');
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }

        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                cnt = cnt + 2;
                maxCnt = max(cnt, maxCnt);
                st.pop();
            }
            else
            {
                cnt = 0;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                cnt = cnt + 2;
                maxCnt = max(cnt, maxCnt);
                st.pop();
            }
            else
            {
                cnt = 0;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                cnt = cnt + 2;
                maxCnt = max(cnt, maxCnt);
                st.pop();
            }
            else
            {

                cnt = 0;
            }
        }
    }
    cout << "Longest valid braces : " << maxCnt << endl;
    return maxCnt;
}

int main()
{
    // int arr[] = {1, 0, 0, 2, 3, 0, 4};
    // int len = sizeof(arr) / sizeof(arr[0]);
    // moveZeroEnd(arr, len);
    // for (int i = 0; i < len; i++)
    // {
    //     cout << " " << arr[i];
    // }
    cout << endl;
    string str = "()()))())))))(())())))()))))()((()(((((((()(()()))()(()())))((()((((((()))))()(())(((((())((((((((()))((())()(()())()(()(()(()))))))))))))))()()((()((())))())()(())(()(()(()(()))))(()()((()(((()())))(()()())((())((((()()()()())()()()()))))(()()(()()((()(()))))))(())()(()))((())(()()()((())((((((()()))(()()()(()((())()()((((((())(((((())(((())))((((()()))()(())(())()))(()(())(((()(()())())(()())()((()()(()(()()()())((((()((()(()(((((())((()(((())(()()(())))))))))(()())((())()((()()()()()))))(((()))(()()())(()))()()))()))))()))))((())((())((()((())()))(()()))))(()))()))()()))))()(())()((())(()())()()()()()))()))()((((((()))))()())))))(()()(()())()((()(((()()))((()((()()(()()()()((())(())(()))())((()())))))())())()()(()())((())(((())(())(((()())()()(()(((())())()()(((()(()))())()()()((())((()()((((((((()()((()(((())()())))()()(()((()(())))))()((()))(()((()(())((()(())((((((";
    cout << "Valid parentheses : " << validLongestParentheses(str) << endl;
}
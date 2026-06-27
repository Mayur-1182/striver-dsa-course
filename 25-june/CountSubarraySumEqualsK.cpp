#include <bits/stdc++.h>
using namespace std;

int maxSubArrayWithSumK(vector<int> a, int target)
{
    int len = a.size();
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            sum += a[j];
            if (sum == target)
            {
                cout << "i :" << i << " " << "j : " << j << endl;
                cnt++;
            }
        }
        sum = 0;
    }
    return cnt;
}

int main()
{

    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    cout << maxSubArrayWithSumK(arr, 6);

    return 0;
}
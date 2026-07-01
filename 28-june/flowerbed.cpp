#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &a, int n)
{
    int len = a.size();
    int cnt = 0;
    if (len == 1 && a[0] == 0)
    {
        return true;
    }
    if (len == 2)
    {
        bool temp = a[0] == 1 || a[1] == 1;
        return temp ? false : n == 1 ? true
                                     : false;
    }
    for (int i = 1; i < len - 1; i++)
    {
        cout << "i :" << i << " " << a[i - 1] << " " << a[i] << " " << a[i + 1] << endl;
        if (a[i - 1] == a[i] && a[i + 1] == a[i] && a[i] == 0)
        {
            cout << "fall once : " << a[i] << endl;
            a[i] = 1;
            cnt++;
        }
    }
    if (cnt == n)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> a = {1, 0, 0, 0, 1};
    cout << canPlaceFlowers(a, 1);

    return 0;
}
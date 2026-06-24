#include <bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>> a)
{
    int n = a.size();
    int m = a[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// bruth force approach
// take separate array row and col and store 1 when found zero in given matrix and track it location by cross indexes

void setMatricZero(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    vector<int> row = {0};
    vector<int> col = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 0;
            }
        }
    }
}

int main()
{

    vector<vector<int>> a = {
        {1, 2, 3}, {1, 0, 2}, {1, 2, 3}};
    setMatricZero(a);
    printArray(a);

    return 0;
}
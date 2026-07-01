#include <bits/stdc++.h>
using namespace std;

void printMatrixInWaveForm(vector<vector<int>> a)
{
    int row = a.size();
    int col = a[0].size();
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 3, 5, 7}, {8, 6, 8, 5}, {5, 6, 4, 3}};
    printMatrixInWaveForm(arr);

    return 0;
}
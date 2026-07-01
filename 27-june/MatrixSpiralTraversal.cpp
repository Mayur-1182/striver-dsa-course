#include <bits/stdc++.h>
using namespace std;

void matrixSpiralPrint(vector<vector<int>> mat)
{
    int row = mat.size();
    int col = mat[0].size();
    int top = 0;
    int right = col - 1;
    int bottom = row - 1;
    int left = 0;
    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}
int main()
{

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 3, 5, 7}, {8, 6, 8, 5}, {5, 6, 4, 3}};
    matrixSpiralPrint(arr);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void matrix90DegRotate(vector<vector<int>> a)
{
    int row = a.size();
    int col = a[0].size();
    int j = col - 1;
    int k = 0;

    int temp[col][row] = {0};
    while (j >= 0 && k < row)
    {
        for (int i = 0; i < row; i++)
        {
            temp[i][j] = a[k][i];
        }
        j--;
        k++;
    }
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            a[x][y] = temp[x][y];
            cout << temp[x][y] << " ";
        }
        cout << endl;
    }
}

void matrixTransposeAndRotate(vector<vector<int>> &a)
{
    int row = a.size();
    int col = a[0].size();
    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int more = target - nums[i];
        cout << "for loop  " << more << " " << target << " " << mpp[i] << endl;
        if (mpp.find(more) != mpp.end())
        {
            result.push_back(mpp[nums[i]]);
            result.push_back(mpp[more]);
            break;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{
    // vector<vector<int>> a = {{1, 2, 3}, {5, 6, 8}};
    // matrixTransposeAndRotate(a);
    vector<int> arr = {3, 2, 4};
    twoSum(arr, 6);

    return 0;
}
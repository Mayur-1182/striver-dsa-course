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

int largestRectangleArea(vector<int> &heights)
{
    int len = heights.size();
    int maxArea = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            auto min = min_element(heights.begin() + i, heights.begin() + j + 1);
            int minValue = *min;
            int distance = j - i + 1;
            maxArea = max(maxArea, minValue * distance);
        }
    }

    return maxArea;
}

int main()
{
    vector<int> arr = {7, 1, 7, 2, 2, 4};
    cout << "reactange area : " << largestRectangleArea(arr);

    return 0;
}
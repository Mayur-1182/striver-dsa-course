#include <iostream>
#include <queue>
using namespace std;

// int findNumOccurOnce(int arr[], int len)
// {
//     priority_queue<int> pq;
//     for (int i = 0; i < len; i++)
//     {
//         pq.push(arr[i]);
//     }
//     while (!pq.empty())
//     {
//         int last = pq.top();
//         pq.pop();
//         int secLast = pq.top();
//         pq.pop();
//         if (last != secLast)
//         {
//             cout << "unique : " << last << endl;
//             return;
//         }
//     }
// }
void longestSubarraywithSum(int arr[], int len, int sum)
{
    for (int i = 0; i < len; i++)
    {
        int tempSum = 0;
        for (int j = i; j < len; j++)
        {
            tempSum += arr[j];
            if (sum == tempSum)
            {
                cout << "element i : " << arr[i] << " " << arr[j] << " " << "index is :" << i << " " << j << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {9, -3, 3, -1, 6, -5, 2, 3};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    // findNumOccurOnce(arr, arrLen);
    longestSubarraywithSum(arr, arrLen, 6);
    return 0;
}
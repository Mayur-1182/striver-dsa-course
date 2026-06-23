#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// int findLargestElement(int arr[])
// {
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int max = arr[0];
//     for (int i = 0; i < len; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

void findSecondLargestElement(int arr[], int len)
{
    cout << "len : " << len << endl;
    int max = INT8_MIN;
    int secMax = INT8_MIN;
    int min = INT8_MAX;
    int secMin = INT8_MAX;
    for (int i = 0; i < len; i++)
    {
        // max and sexmax
        if (max < arr[i])
        {
            secMax = max;
            max = arr[i];
        }
        if (secMax < arr[i] && max > arr[i])
        {
            secMax = arr[i];
        }

        // min and sec min
        if (min > arr[i])
        {
            secMin = min;
            min = arr[i];
        }
        if (arr[i] > min && arr[i] < secMin)
        {
            secMin = arr[i];
        }
    }
    cout << "max : " << max << endl;
    cout << "min : " << min << endl;
    cout << "sec max : " << secMax << endl;
    cout << "sec min : " << secMin << endl;
}

void removeDuplicate(int arr[], int len)
{
    vector<int> vc;
    vc.push_back(arr[0]);
    for (int i = 1; i < len; i++)
    {
        if (vc.empty() || vc.back() != arr[i])
        {
            vc.push_back(arr[i]);
        }
    }
    for (auto it : vc)
    {
        cout << it << " ";
    }
}

void twoPinterDuplicate(int arr[], int len)
{
    int i = 0;

    for (int j = i + 1; j < len; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << " " << arr[i] << " ";
    }
}

void moveZeroAtEnd(int arr[], int len)
{
    int i = -1;
    for (int j = i + 1; j < len; j++)
    {
        if (arr[j] != 0)
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int k = i + 1; k < len; k++)
    {
        arr[k] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        cout << " " << arr[i] << " ";
    }
}
void maxOccurenceOne(int arr[], int len)
{
    int max = -1;
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {

            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (max < cnt)
        {
            max = cnt;
        }
    }
    cout << "max occurence of 1 : " << max << endl;
}
int main()
{
    // int arr[] = {1, 4, 5, 6, 44, 66, 90, 76, 23, 56, 12, 545, 76, 4, 33, 6, 87};
    // int len = sizeof(arr) / sizeof(arr[0]);
    int srtArr[] = {1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 5, 6, 7, 7, 8, 8, 9};
    int srtArrLen = sizeof(srtArr) / sizeof(srtArr[0]);
    // removeDuplicate(srtArr, srtArrLen);
    // twoPinterDuplicate(srtArr, srtArrLen);

    int arrZero[] = {0, 1, 0, 3, 12};
    int arrZeroLen = sizeof(arrZero) / sizeof(arrZero[0]);
    // moveZeroAtEnd(arrZero, arrZeroLen);
    int arrOnes[] = {1, 0, 1, 1, 2, 0, 1, 1, 1, 4, 0, 5, 1, 1, 0, 1};
    int arrOnesLen = sizeof(arrOnes) / sizeof(arrOnes[0]);

    maxOccurenceOne(arrOnes, arrOnesLen);

    // findSecondLargestElement(arr, len);

    return 0;
}
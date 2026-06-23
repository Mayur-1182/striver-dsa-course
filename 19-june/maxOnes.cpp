#include <bits/stdc++.h>
using namespace std;

int maxOneOccurence(int arr[], int len)
{
    int temp = 0;
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            temp++;
            if (max < temp)
            {
                max = temp;
            }
        }
        else
        {
            temp = 0;
        }
    }
    return max;
}

int numOccurOnceOtherTwice(int arr[], int len)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < len; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

int numOccurOnceOtherTwice2(int arr[], int len)
{
    int maxi = arr[0];
    for (int i = 0; i < len; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int hash[maxi] = {0};
    for (int i = 0; i < maxi; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < maxi; i++)
    {
        if (hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }
}

int numOccurOnceOtherTwice3(int arr[], int len)
{
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp = temp ^ arr[i];
    }
    return temp;
}

void sortZeroOneTwos(int arr[], int len)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < len; i++)
    {
        mpp[arr[i]]++;
    }
    int j = 0;
    for (auto it : mpp)
    {
        int i = it.second;
        int cnt = 0;
        while (cnt < i)
        {
            arr[j] = it.first;

            j++;
            cnt++;
        }
        reverse(arr, arr + len);
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int binarySearch(int arr[], int len, int target)
{
    int i = 0;
    int j = len - 1;
    int mid = (i + j) / 2;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (arr[mid] < target)
        {
            i = mid + 1;
        }
        else if (arr[mid] > target)
        {
            j = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{

    int arr1[] = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "binary index : " << binarySearch(arr1, len1, 8);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#include <vector>

void printArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void leftRotateByOne(int arr[], int len)
{
    int temp = arr[0];
    for (int i = 1; i < len; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[len - 1] = temp;
}

void leftRotateByK(int arr[], int len, int rotate)
{
    int k = rotate % len;
    for (int i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (int j = 1; j < len; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[len - 1] = temp;
    }
}

void leftRotateByKOptimal(int arr[], int len, int d)
{
    d = d % len;
    reverse(arr, arr + d);
    reverse(arr + d, arr + len);
    reverse(arr, arr + len);
}

void leftRotateByKOptimal2(int arr[], int len, int d)
{
    d = d % len;
    reverse(arr, arr + 2);
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int len = sizeof(arr) / sizeof(arr[0]);
    leftRotateByKOptimal2(arr, len, 4);
    printArray(arr, len);
    return 0;
}
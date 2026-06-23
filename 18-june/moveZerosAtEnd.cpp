#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void moveZerosEnd(int arr[], int len)
{

    int j = -1;
    for (int i = 0; i < len; i++)
    {
        // get inx of first zero
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;

    for (int i = j + 1; i < len; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void unionSortedArray(int a[], int b[], int alen, int blen)
{
    cout << "lens : " << alen << " " << blen << endl;
    vector<int> temp;
    int i = 0;
    int j = 0;

    while (i < alen && j < blen)
    {
        if (a[i] < b[j])
        {
            if (temp.empty() || temp.back() != a[i])
            {
                temp.push_back(a[i]);
            }
            i++;
        }

        else if (a[i] > b[j])
        {
            if (temp.empty() || temp.back() != b[j])
            {
                temp.push_back(b[j]);
            }
            j++;
        }
        else
        {
            if (temp.empty() || temp.back() != a[i])
            {
                temp.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    while (i < alen)
    {
        if (temp.empty() || temp.back() != a[i])
        {

            temp.push_back(a[i]);
        }
        i++;
    }
    while (j < blen)
    {
        if (temp.empty() || temp.back() != b[j])
        {

            temp.push_back(b[j]);
        }
        j++;
    }

    for (auto it : temp)
    {
        cout << it << " ";
    }
    cout << endl;
}

void intersectionSortedArray(int a[], int b[], int alen, int blen)
{
    int i = 0;
    int j = 0;
    vector<int> temp;
    while (i < alen && j < blen)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else if (a[i] == b[j])
        {
            if (temp.empty() || temp.back() != a[i])
            {

                temp.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    for (auto it : temp)
    {
        cout << it << " ";
    }
    cout << endl;
}

int findMissingNumber(int arr[], int len)
{
    int sum = (len + 1) * (len + 2) / 2;
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp += arr[i];
    }
    return sum - temp;
}

int missingNumberInSeries(int arr[], int len)
{

    int tempSum = 0;
    for (int i = 0; i < len; i++)
    {
        tempSum += arr[i];
    }
    int total = ((len + 1) * (arr[0] + arr[len - 1])) / 2;
    return total - tempSum;
}

int missingNumberInSeries2(int arr[], int len)
{
    int diff1 = arr[1] - arr[0];
    int diff2 = arr[2] - arr[1];
    int diff = min(diff1, diff2);
    cout << diff1 << " " << diff2 << " " << diff << endl;
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i + 1] - arr[i] != diff)
        {
            return arr[i + 1];
        }
    }
}

int main()
{

    int arr1[] = {11, 22, 22, 33, 55, 77, 99};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {22, 33, 44, 55, 66, 77};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {1, 5, 3, 2};
    int arr3Len = sizeof(arr3) / sizeof(arr3[0]);
    cout << "missing number is : " << findMissingNumber(arr3, arr3Len) << endl;
    // intersectionSortedArray(arr1, arr2, len1, len2);
    cout << "in series missing number : " << missingNumberInSeries2(arr2, len2) << endl;

    return 0;
}
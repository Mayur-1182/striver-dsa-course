#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void duplicateRemoveTwoPointer(int arr[], int len)
{
    // works on sorted array
    int i = 0;
    for (int j = i + 1; j < len; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    for (int j = i + 1; j < len; j++)
    {
        arr[j] = 0;
    }
    printArray(arr, len);
}

void removeDuplicateUsingSet(int arr[], int len)
{
    set<int> st;
    for (int i = 0; i < len; i++)
    {
        st.insert(arr[i]);
    }
    auto it = st.begin();
    while (it != st.end())
    {
        cout << *(it) << " ";
        it++;
    }
}

void mergeSortedArray(int a[], int b[], int aLen, int bLen)
{
    vector<int> temp;
    int i = 0;
    int j = 0;
    while (i < aLen && j < bLen)
    {
        if (a[i] < b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    while (i < aLen)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j < bLen)
    {
        temp.push_back(b[j]);
        j++;
    }
    for (auto it : temp)
    {
        cout << it << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 6, 6};
    int arr2[] = {2, 3, 4, 5, 5, 8, 9, 11, 22, 33};
    int arr2Len = sizeof(arr2) / sizeof(arr2[0]);
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    mergeSortedArray(arr, arr2, arrLen, arr2Len);
    return 0;
}
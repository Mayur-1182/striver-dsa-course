#include <iostream>
#include <vector>
#include <set>
using namespace std;

int findSecLargest(int arr[], int len)
{
    set<int> st;
    for (int i = 0; i < len; i++)
    {
        st.insert(arr[i]);
    }
    auto it = st.rbegin();
    it++;
    return *it;
}
int main()
{
    int arr[] = {11, 22, 44, 33, 55, 66, 33};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    cout << "second largets ele : " << findSecLargest(arr, arrLen) << endl;
    return 0;
}
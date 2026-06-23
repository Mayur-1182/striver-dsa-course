#include <iostream>
#include <vector>
using namespace std;

int functionalWaySumNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + functionalWaySumNum(n - 1);
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

string checkPalindromeStr(string str, int n, int i)
{
    if (i >= n / 2)
    {
        return "YES";
    }
    if (str[i] != str[n - i - 1])
    {
        return "NO";
    }
    return checkPalindromeStr(str, n, i + 1);
}

int fibonacciSeries(int n)
{

    if (n <= 1)
    {
        return n;
    }
    cout << n << " ";
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}
int main()
{
    // cout << "sum is : " << functionalWaySumNum(5) << endl;
    // cout << "factorial is :" << factorial(6) << endl;
    // int arr[] = {11, 22, 33, 44, 55, 66};
    // reverseArray(0, arr, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << "  ";
    // }
    // string str = "sradars";
    // cout << checkPalindromeStr(str, str.length(), 0);
    fibonacciSeries(6);
    return 0;
}
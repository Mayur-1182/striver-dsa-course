#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num)
{
    int temp = num;
    int count = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    return count;
}

int reverseNumber(int num)
{
    // 1234
    int temp = num;
    int reverseNum = 0;
    while (temp > 0)
    {
        reverseNum = reverseNum * 10 + temp % 10;
        temp /= 10;
    }
    return reverseNum;
}

string checkPalindromeNumber(int num)
{
    string strNum = to_string(num);
    int len = strNum.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (strNum[i] != strNum[len - 1 - i])
        {
            return "NO";
        }
    }
    return "YES";
}
string checkArmstrongNumber(int num)
{
    string strNum = to_string(num);
    int numLen = strNum.length();
    int temp = num;
    int sum = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum + round(pow(rem, numLen));
        temp = temp / 10;
        // cout << "temp : " << temp << " " << "rem : " << rem << endl;
    }
    // cout << "inside fun : " << num << " " << sum << " " << numLen << endl;
    if (num == sum)
    {
        return "YES";
    }
    return "NO";
}

string checkPrimeNumber(int num)
{
    if (num < 2)
    {
        return "NO";
    }
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "i-->" << i << endl;
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;
    // cout << "Number of digit is : " << countDigit(num) << endl;
    // cout << "Reverse number is : " << reverseNumber(num) << endl;
    // cout << "Check armstrong or not : " << checkArmstrongNumber(num) << endl;
    // cout << "Check palindrome or not : " << checkPalindromeNumber(num) << endl;
    cout << "prime number : " << checkPrimeNumber(num) << endl;
    return 0;
}
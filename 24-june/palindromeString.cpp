#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string str1 = s;

    str1.erase(remove_if(str1.begin(), str1.end(),
                         [](char c)
                         { return !isalnum(static_cast<unsigned char>(c)); }),
               str1.end());

    int len = str1.length();
    string left = str1.substr(0, len / 2);
    string right = str1.substr(len / 2, len);
    reverse(right.begin(), right.end());
    cout << "left : " << left << endl;
    cout << "right : " << right << endl;
    if (left == right)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "Was it a car or a cat I saw?";
    cout << isPalindrome(s);

    return 0;
}
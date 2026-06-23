#include <iostream>
using namespace std;

void sumOfNum(int n, int sum)
{
    if (n == 0)
    {
        return;
    }
    cout << "n : " << n << "  " << sum << endl;
    sumOfNum(n - 1, sum + n);
}

int n = 1;
void printNum()
{
    if (n == 4)
        return;
    cout << "n : " << n << endl;
    n++;
    printNum();
}

void printName(int n)
{
    if (n == 0)
        return;
    printName(n - 1);
    cout << n << " " << "Mayur" << endl;
}

void printNumReverse(int n)
{
    if (n == 0)
    {
        return;
    }
    printNumReverse(n - 1);
    cout << "n : " << n << endl;
}
int main()
{
    printNumReverse(5);
    return 0;
}
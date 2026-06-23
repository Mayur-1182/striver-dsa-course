#include <iostream>
using namespace std;

void findGCD(int a, int b)
{
    cout << "input values : " << a << " " << b << "  ---> ";
    while (a > 0 && b > 0 && a != b)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
        if (a == 0)
        {
            cout << "GCD is : " << b << endl;
            return;
        }
        else
        {
            cout << "GCD is : " << a << endl;
            return;
        }
    }
}

void findGCDNaive(int a, int b)
{
    int temp = a < b ? a : b;
    cout << "temp : " << temp << endl;
    for (int i = temp; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "answer is : " << i << endl;
            return;
        }
    }
}

int main()
{
    findGCD(20, 30);
    findGCD(40, 128);
    findGCD(32, 70);
    findGCD(270, 90);
    findGCD(4, 50);
    // findGCDNaive(20, 50);
    return 0;
}
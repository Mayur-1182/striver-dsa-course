#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void printDivisor(int num)
{
    int n = num;
    cout << n << " " << "All divisor is : ";
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << n << " " << it;
    }
    cout << endl;
}

int main()
{
    printDivisor(128);
    printDivisor(46);
    printDivisor(125);
    printDivisor(36);
    return 0;
}
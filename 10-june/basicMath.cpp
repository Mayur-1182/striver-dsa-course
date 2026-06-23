#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void printDivisor(int num)
{
    vector<int> lt;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            lt.push_back(i);
            if ((num / i) != i)
            {
                lt.push_back(num / i);
            }
        }
    }
    sort(lt.begin(), lt.end());
    for (auto it : lt)
    {
        cout << " " << it;
    }
    cout << endl;
}

string checkPrimeNumber(int n){
    
}

int main()
{
    printDivisor(128);
    printDivisor(46);
    printDivisor(125);
    printDivisor(36);
    return 0;
}
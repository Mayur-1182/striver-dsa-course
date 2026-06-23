#include <iostream>
using namespace std;

void BoxPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void rightAlignTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void leftAlignedTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int s = 0; s < num - (i + 1); s++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void numberTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    }
}

void sameNumberLineTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void incrementTriangle(int num)
{
    int counter = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << counter % 2 << " ";
            counter++;
        }
        cout << endl;
    }
}
void charTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char c = 65 + i;
            cout << c << " ";
        }
        cout << endl;
    }
}
void reverseCharTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        int counter = 0;
        for (int j = num - i; j > 0; j--)
        {
            char c = counter + 65;
            cout << j;
            counter++;
        }
        cout << endl;
    }
}

void reverseTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void fullTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int s = 0; s < num - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void fullNumberTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        int counter = 0;
        for (int s = 0; s < num - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            char c = counter + 65;
            cout << c;
            counter++;
        }
        for (int k = i; k >= 1; k--)
        {
            counter--;
            char c = counter - 1 + 65;
            cout << c;
        }
        cout << endl;
    }
}

void fullReverseTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < num - 1 - i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void Pattern9(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int s = 1; s <= num - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= num - 1; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j < 2 * (num)-2 * i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern10(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern12(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int s = 0; s < 2 * (num - i); s++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}

int main()
{
    // BoxPattern(5);
    // rightAlignTriangle(5);
    // leftAlignedTriangle(5);
    // numberTriangle(5);
    // sameNumberLineTriangle(5);
    // incrementTriangle(5);
    // charTriangle(5);
    // reverseCharTriangle(5);
    // reverseTriangle(5);
    // fullTriangle(5);
    // fullNumberTriangle(10);
    // fullReverseTriangle(5);
    Pattern12(4);

    return 0;
}
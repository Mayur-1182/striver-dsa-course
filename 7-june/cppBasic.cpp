#include <iostream>
using namespace std;

void printName(string name)
{
    int a = 23;
    cout << "Hello mayur from function called" << name;
};
int sum(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    return a;
}

int doSomething(int &num)
{
    cout << "get value : " << num << endl;
    num += 10;
    cout << "modified value : " << num << endl;
}
int main()
{
    string str = "mayur";
    printName(str);
    cout << "sum of two number is : " << sum(12, 45) << endl;
    cout << "find max num : " << max(12, 56);

    int num = 20;
    doSomething(num);
    cout << "after function called num value : " << num << endl;

    // cout << "hello mayur" << endl;
    // cout << "Gm" << endl;
    // int x;
    // cin >> x;
    // cout << "the valyue of x is : " << x << endl;
    // float a = 12.67;
    // int b = 45.32;
    // cout << a << " - " << b << endl;

    // string str;
    // getline(cin, str);
    // cout << "provided string is : " << str << endl;
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << "privided string : " << s1 << "  -  " << s2 << endl;

    // int age;
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "you are not adult:" << endl;
    // }
    // else
    // {
    //     cout << "you are adult:" << endl;
    // }
    // int score;
    // cout << "Enter score here : ";
    // cin >> score;
    // if (score < 25)
    // {
    //     cout << "Grade : F" << endl;
    // }
    // else if (score >= 25 && score <= 44)
    // {
    //     cout << "Grade : E" << endl;
    // }
    // else if (score >= 45 && score <= 49)
    // {
    //     cout << "Grade : D" << endl;
    // }
    // else if (score >= 50 && score <= 59)
    // {
    //     cout << "Grade : C" << endl;
    // }
    // else if (score >= 60 && score <= 79)
    // {
    //     cout << "Grade : B" << endl;
    // }
    // else
    // {
    //     cout << "Grade : A" << endl;
    // }

    // int age;
    // cout << "Enter your age here : ";
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "not eligible for the job.";
    // }
    // else if (age >= 18 && age <= 54)
    // {
    //     cout << "eligible for the job.";
    // }
    // else if (age >= 55 && age <= 57)
    // {

    //     cout << "Eligible for job but retirement soon.";
    // }
    // else
    // {
    //     cout << "retirement time.";
    // }

    // int day;
    // cout << "Enter day number : ";
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "First day";
    //     break;

    // case 2:
    //     cout << "Second day";
    //     break;

    // case 3:
    //     cout << "Third day";
    //     break;

    // case 4:
    //     cout << "Fourth day";
    //     break;

    // case 5:
    //     cout << "Fifth day";
    //     break;

    // default:
    //     cout << "Invalid day number";
    // }

    // arrays
    // int arr[] = {11, 22, 33, 44, 55, 66, 77, 88};
    // int length = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     cout << i + 1 << "-->" << arr[i] << endl;
    // }
}
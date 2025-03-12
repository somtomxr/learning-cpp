#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the amount: ";
    cin >> a;

    if (a >= 500)
    {
        cout << a / 500 << " * 500 rs\n";
        a = a % 500;
    }
    if (a >= 100)
    {
        cout << a / 100 << " * 100 rs\n";
        a = a % 100;
    }
    if (a >= 50)
    {
        cout << a / 50 << " * 50 rs\n";
        a = a % 50;
    }
    if (a >= 20)
    {
        cout << a / 20 << " * 20 rs\n";
        a = a % 20;
    }
    if (a >= 10)
    {
        cout << a / 10 << " * 10 rs\n";
        a = a % 10;
    }
    if (a >= 5)
    {
        cout << a / 5 << " * 5 rs\n";
        a = a % 5;
    }
    if (a >= 1)
    {
        cout << a << " * 1 rs\n";
    }

    return 0;
}
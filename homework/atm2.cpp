#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the amount: ";
    cin >> a;

    // Initialize variables to store the count of each denomination
    int count500 = 0, count100 = 0, count50 = 0, count20 = 0, count10 = 0, count5 = 0, count1 = 0;

    // Calculate the number of each denomination
    if (a >= 500)
    {
        count500 = a / 500;
        a = a % 500;
    }
    if (a >= 100)
    {
        count100 = a / 100;
        a = a % 100;
    }
    if (a >= 50)
    {
        count50 = a / 50;
        a = a % 50;
    }
    if (a >= 20)
    {
        count20 = a / 20;
        a = a % 20;
    }
    if (a >= 10)
    {
        count10 = a / 10;
        a = a % 10;
    }
    if (a >= 5)
    {
        count5 = a / 5;
        a = a % 5;
    }
    if (a >= 1)
    {
        count1 = a;
    }

    // Print all denominations, including those with 0 count
    cout << count500 << " * 500 rs\n";
    cout << count100 << " * 100 rs\n";
    cout << count50 << " * 50 rs\n";
    cout << count20 << " * 20 rs\n";
    cout << count10 << " * 10 rs\n";
    cout << count5 << " * 5 rs\n";
    cout << count1 << " * 1 rs\n";

    return 0;
}
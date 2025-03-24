#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0); // Repeat until a positive number is entered

    cout << "You entered: " << number << endl;
    return 0;
}
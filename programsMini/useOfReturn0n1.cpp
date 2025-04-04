#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Error: Invalid input!" << endl;
        return 1; // Indicates an error
    }

    cout << "You entered: " << number << endl;
    return 0; // Indicates success
}
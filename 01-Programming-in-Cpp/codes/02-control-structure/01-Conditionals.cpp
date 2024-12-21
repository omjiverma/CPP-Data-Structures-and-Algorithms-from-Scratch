#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // If-else conditional
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    // Nested if
    if (number != 0) {
        if (number % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
    }

    // Switch-case example
    switch (number) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        default:
            cout << "You entered a number other than one or two." << endl;
            break;
    }

    return 0;
}

#include <iostream>
#include <limits> // Required for numeric_limits2
#include <string> // For string input

using namespace std;

int main() {
    int age;
    double height;
    char initial;
    string name;

    // Input for integer
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered age: " << age << endl;

    // Input for double
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "You entered height: " << height << endl;

    // Input for character (single character)
    cout << "Enter your middle initial: ";
    cin >> initial; // Reads only the first character.
    cout << "You entered initial: " << initial << endl;

    // Input for string (word, reads until whitespace)
    cout << "Enter your first name: ";
    cin >> name; // Reads until a space, tab, or newline is encountered.
    cout << "You entered name: " << name << endl;

    // Input for string (line, reads entire line including spaces)
    cout << "Enter your full name: ";
    cin.ignore(); // Consume the newline character left by the previous input
    getline(cin, name); // Reads the entire line, including spaces.
    cout << "You entered full name: " << name << endl;

    // Input for multiple values on one line
    int num1, num2;
    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;
    cout << "You entered num1: " << num1 << " and num2: " << num2 << endl;

    // Handling invalid input
    int num;
    cout << "Enter an integer: ";
    if (cin >> num) { // Check if the input was successful
        cout << "You entered: " << num << endl;
    } else {
        cout << "Invalid input. Please enter an integer." << endl;
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input from the buffer
    }


    return 0;
}
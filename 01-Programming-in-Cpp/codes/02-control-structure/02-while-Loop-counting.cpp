#include <iostream>

using namespace std;

int main() {
    int limit;

    // Get input from the user
    cout << "Enter a positive integer limit: ";
    cin >> limit;

    // Input validation: Check if the input is positive
    if (limit <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Indicate an error
    }

    int counter = 1; // Initialize the counter

    // Use a while loop to print the counting
    while (counter <= limit) {
        cout << counter << " ";
        counter++; // Increment the counter
    }

    cout << endl; // Add a newline at the end for better formatting
    return 0;
}
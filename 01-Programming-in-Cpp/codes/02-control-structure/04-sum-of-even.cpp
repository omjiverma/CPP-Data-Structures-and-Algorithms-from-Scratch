#include <iostream>

using namespace std;

int main() {
    int limit;
    int sum = 0;
    int counter = 2; // Initialize the counter to the first even number

    cout << "Enter an even positive integer limit: ";
    cin >> limit;

    // Input validation: Check if the input is positive and even
    if (limit <= 0 || limit % 2 != 0) {
        cout << "Please enter a positive even integer." << endl;
        return 1; // Indicate an error
    }

    while (counter <= limit) {
        sum += counter;
        counter += 2; // Increment by 2 to get the next even number
    }

    cout << "Sum of even numbers up to " << limit << " is: " << sum << endl;

    return 0;
}
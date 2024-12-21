#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = 10;

    // Equality (==)
    cout << "x == y: " << (x == y) << endl; // Output: x == y: 0 (false)
    cout << "x == z: " << (x == z) << endl; // Output: x == z: 1 (true)

    // Inequality (!=)
    cout << "x != y: " << (x != y) << endl; // Output: x != y: 1 (true)
    cout << "x != z: " << (x != z) << endl; // Output: x != z: 0 (false)

    // Greater than (>)
    cout << "x > y: " << (x > y) << endl; // Output: x > y: 1 (true)
    cout << "x > z: " << (x > z) << endl; // Output: x > z: 0 (false)

    // Less than (<)
    cout << "x < y: " << (x < y) << endl; // Output: x < y: 0 (false)
    cout << "x < z: " << (x < z) << endl; // Output: x < z: 0 (false)

    // Greater than or equal to (>=)
    cout << "x >= y: " << (x >= y) << endl; // Output: x >= y: 1 (true)
    cout << "x >= z: " << (x >= z) << endl; // Output: x >= z: 1 (true)

    // Less than or equal to (<=)
    cout << "x <= y: " << (x <= y) << endl; // Output: x <= y: 0 (false)
    cout << "x <= z: " << (x <= z) << endl; // Output: x <= z: 1 (true)

    // Comparison with floating-point numbers (Important Note)
    double a = 1.0;
    double b = 0.999999999; // Very close to 1.0

    cout << "a == b: " << (a == b) << endl; // Output: a == b: 0 (false) (Likely)
    // Direct comparison of floating-point numbers for equality can be problematic due to
    // how they are represented in memory (rounding errors).

    // Using relational operators with char
    char char1 = 'A'; // ASCII value 65
    char char2 = 'B'; // ASCII value 66

    cout << "char1 < char2: " << (char1 < char2) << endl; // Output: char1 < char2: 1 (true) (Compares ASCII values)

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 3;

    // Addition (+)
    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl; // Output: 10 + 3 = 13

    // Subtraction (-)
    int difference = num1 - num2;
    cout << num1 << " - " << num2 << " = " << difference << endl; // Output: 10 - 3 = 7

    // Multiplication (*)
    int product = num1 * num2;
    cout << num1 << " * " << num2 << " = " << product << endl; // Output: 10 * 3 = 30

    // Integer Division (/)
    int quotient = num1 / num2; // Integer division truncates the decimal part
    cout << num1 << " / " << num2 << " = " << quotient << endl; // Output: 10 / 3 = 3 (not 3.333...)

    // Modulus (%) - Returns the remainder of the division
    int remainder = num1 % num2;
    cout << num1 << " % " << num2 << " = " << remainder << endl; // Output: 10 % 3 = 1 (10 = 3*3 + 1)

    // Example with negative numbers in modulus
    int num3 = -10;
    int num4 = 3;
    int remainder2 = num3 % num4;
    cout << num3 << " % " << num4 << " = " << remainder2 << endl; // Output: -10 % 3 = -1

    int remainder3 = num1 % -num4;
    cout << num1 << " % " << -num4 << " = " << remainder3 << endl; // Output: 10 % -3 = 1

    // Floating-point division (to get decimal results)
    double num5 = 10.0; // Use floating-point numbers
    double num6 = 3.0;
    double floatQuotient = num5 / num6;
    cout << num5 << " / " << num6 << " = " << floatQuotient << endl; // Output: 10 / 3 = 3.33333

    // Increment Operator (++)
    int x = 5;
    x++; // Post-increment: uses the current value, then increments
    cout << "x++ (post-increment): " << x << endl; // Output: 6

    int y = 5;
    ++y; // Pre-increment: increments the value, then uses it
    cout << "++y (pre-increment): " << y << endl; // Output: 6

    int a = 5;
    cout << "a++ returns: " << a++ << endl; // Output: 5 (value before increment)
    cout << "Now a is: " << a << endl;       // Output: 6 (value after increment)

    int b = 5;
    cout << "++b returns: " << ++b << endl; // Output: 6 (value after increment)
    cout << "Now b is: " << b << endl;       // Output: 6 (value after increment)


    // Decrement Operator (--)
    int p = 8;
    p--; // Post-decrement
    cout << "p-- (post-decrement): " << p << endl; // Output: 7

    int q = 8;
    --q; // Pre-decrement
    cout << "--q (pre-decrement): " << q << endl; // Output: 7

        int c = 5;
    cout << "c-- returns: " << c-- << endl; // Output: 5 (value before decrement)
    cout << "Now c is: " << c << endl;       // Output: 4 (value after decrement)

    int d = 5;
    cout << "--d returns: " << --d << endl; // Output: 4 (value after decrement)
    cout << "Now d is: " << d << endl;       // Output: 4 (value after decrement)

    return 0;
}
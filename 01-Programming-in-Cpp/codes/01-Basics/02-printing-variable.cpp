#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    // Integer (int)
    int a = 45;
    cout << "The value of a (int) is " << a << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Minimum value of int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum value of int: " << numeric_limits<int>::max() << endl;
    cout << endl;

    // Character (char)
    char ch = 'A';
    cout << "The value of ch (char) is " << ch << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Minimum value of char: " << numeric_limits<char>::min() << endl;
    cout << "Maximum value of char: " << numeric_limits<char>::max() << endl;
    cout << endl;


    // Float (float)
    float f = 4.5f; // Add 'f' suffix for float literals
    cout << "The value of f (float) is " << f << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Minimum value of float: " << numeric_limits<float>::min() << endl;
    cout << "Maximum value of float: " << numeric_limits<float>::max() << endl;
    cout << endl;

    // Double (double)
    double d = 4.55555;
    cout << "The value of d (double) is " << d << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Minimum value of double: " << numeric_limits<double>::min() << endl;
    cout << "Maximum value of double: " << numeric_limits<double>::max() << endl;
    cout << endl;

    // Boolean (bool)
    bool b = true;
    cout << "The value of b (bool) is " << b << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Minimum value of bool: " << numeric_limits<bool>::min() << endl;
    cout << "Maximum value of bool: " << numeric_limits<bool>::max() << endl;
    cout << endl;

    // Short Integer (short)
    short s = 1000;
    cout << "The value of s (short) is " << s << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Minimum value of short: " << numeric_limits<short>::min() << endl;
    cout << "Maximum value of short: " << numeric_limits<short>::max() << endl;
    cout << endl;

        // Long Integer (long)
    long l = 1000000;
    cout << "The value of l (long) is " << l << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Minimum value of long: " << numeric_limits<long>::min() << endl;
    cout << "Maximum value of long: " << numeric_limits<long>::max() << endl;
    cout << endl;

    // Long Long Integer (long long)
    long long ll = 10000000000;
    cout << "The value of ll (long long) is " << ll << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Minimum value of long long: " << numeric_limits<long long>::min() << endl;
    cout << "Maximum value of long long: " << numeric_limits<long long>::max() << endl;
    cout << endl;

    // Print number using character
    int c = 'A';
    cout << "The value of c (int) is " << c << endl;


    return 0;
}
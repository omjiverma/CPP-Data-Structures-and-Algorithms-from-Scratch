#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = 15;
    bool condition1 = (x > y);  // true (10 > 5)
    bool condition2 = (x < z);  // true (10 < 15)
    bool condition3 = (x == z); // false (10 == 15)

    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "Condition 1 (x > y): " << condition1 << endl;
    cout << "Condition 2 (x < z): " << condition2 << endl;
    cout << "Condition 3 (x == z): " << condition3 << endl;
    cout << endl;

    // Logical AND (&&)
    cout << "Condition1 && Condition2: " << (condition1 && condition2) << endl; // true && true = true (1)
    cout << "Condition1 && Condition3: " << (condition1 && condition3) << endl; // true && false = false (0)
    cout << "Condition3 && Condition2: " << (condition3 && condition2) << endl; // false && true = false (0)
    cout << endl;

    // Logical OR (||)
    cout << "Condition1 || Condition2: " << (condition1 || condition2) << endl; // true || true = true (1)
    cout << "Condition1 || Condition3: " << (condition1 || condition3) << endl; // true || false = true (1)
    cout << "Condition3 || Condition2: " << (condition3 || condition2) << endl; // false || true = true (1)
    cout << "Condition3 || Condition3: " << (condition3 || condition3) << endl; // false || false = false (0)
    cout << endl;

    // Logical NOT (!)
    cout << "!Condition1: " << !condition1 << endl; // !true = false (0)
    cout << "!Condition3: " << !condition3 << endl; // !false = true (1)
    cout << "!(x > z): " << !(x > z) << endl; // !(false) = true (1)
    cout << "!(x < y): " << !(x < y) << endl; // !(false) = true (1)
    cout << endl;

    // Short-circuiting demonstration (Important!)
    int a = 5;
    int b = 0;

    // Avoid division by zero using short-circuiting
    if (b != 0 && a / b > 2) { // If b is 0, the second condition is NOT evaluated
        cout << "a / b is greater than 2." << endl;
    } else {
        cout << "Cannot divide by zero or a / b is not greater than 2." << endl; // This will print if b is 0
    }

    //Another example of short circuiting
    int val = 10;
    if(val>5 || ++val<12){ // in this case ++val<12 will not be executed.
        cout<<"Value of val is : "<<val<<endl; // Output: 10
    }

    val = 10;
    if(val>15 || ++val<12){ // in this case ++val<12 will be executed.
        cout<<"Value of val is : "<<val<<endl; // Output: 11
    }

    return 0;
}
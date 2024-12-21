#include <iostream> // For input/output operations
#include <iomanip> // For setting output precision

using namespace std; // Use the standard namespace

int main() {
    double fahrenheit, celsius; // Declare variables to store Fahrenheit and Celsius temperatures

    cout << "Enter temperature in Fahrenheit: "; // Prompt the user for input
    cin >> fahrenheit; // Read the Fahrenheit temperature from the user

    // Convert Fahrenheit to Celsius using the formula:
    // Celsius = (Fahrenheit - 32) * 5/9
    // Using 32.0, 5.0, and 9.0 ensures floating-point division for accurate results.
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0); 

    cout << fixed << setprecision(2); // Set the output to display fixed-point notation with 2 decimal places
    cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius" << endl; // Display the converted temperature

    return 0; // Indicate successful program execution
}
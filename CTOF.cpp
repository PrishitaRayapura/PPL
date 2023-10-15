//Write a program to convert decimal to Fahrenheit using functions.
#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;

    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);

    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}


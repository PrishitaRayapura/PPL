#include <iostream>
using namespace std;

// Define a structure for complex numbers
struct Complex {
    double real;
    double imaginary;
};

// Function to add two complex numbers
Complex addComplex(const Complex& num1, const Complex& num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    Complex num1, num2, sum;

    cout << "Enter the real part of the first complex number: ";
    cin >> num1.real;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> num1.imaginary;

    cout << "Enter the real part of the second complex number: ";
    cin >> num2.real;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> num2.imaginary;

    sum = addComplex(num1, num2);

    cout << "Sum of the two complex numbers: " << sum.real << " + " << sum.imaginary << "i" << endl;

    return 0;
}


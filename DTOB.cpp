//Write a C++ program using functions to convert decimal to any base and vice versa.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert a decimal number to any base
string decimalToBase(int decimal, int base) {
    string result = "";
    
    while (decimal > 0) {
        int remainder = decimal % base;
        char digit;
        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + remainder - 10;
        }
        result = digit + result;
        decimal /= base;
    }
    
    return result;
}

// Function to convert a number in any base to decimal
int baseToDecimal(const string& number, int base) {
    int decimal = 0;
    int power = 0;

    for (int i = number.length() - 1; i >= 0; i--) {
        char digit = number[i];
        int value;
        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        } else if (digit >= 'A' && digit <= 'Z') {
            value = 10 + digit - 'A';
        } else if (digit >= 'a' && digit <= 'z') {
            value = 10 + digit - 'a';
        } else {
            cout << "Invalid character in the input.\n";
            return -1;
        }

        if (value >= base) {
            cout << "Invalid digit for the base.\n";
            return -1;
        }

        decimal += value * pow(base, power);
        power++;
    }

    return decimal;
}

int main() {
    int choice;
    
    cout << "Choose an option:\n";
    cout << "1. Decimal to any base\n";
    cout << "2. Any base to decimal\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    if (choice == 1) {
        int decimal, base;
        cout << "Enter the decimal number: ";
        cin >> decimal;
        cout << "Enter the base to convert to: ";
        cin >> base;
        if (base >= 2 && base <= 36) {
            string result = decimalToBase(decimal, base);
            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid base. Base should be between 2 and 36.\n";
        }
    } else if (choice == 2) {
        string number;
        int base;
        cout << "Enter the number in the given base: ";
        cin >> number;
        cout << "Enter the base of the given number: ";
        cin >> base;
        if (base >= 2 && base <= 36) {
            int result = baseToDecimal(number, base);
            if (result != -1) {
                cout << "Result: " << result << endl;
            }
        } else {
            cout << "Invalid base. Base should be between 2 and 36.\n";
        }
    } else {
        cout << "Invalid choice. Please choose 1 or 2.\n";
    }

    return 0;
}


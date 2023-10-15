#include <iostream>
#include <string>
using namespace std;

// Define a structure to store product information
struct Product {
    int productNumber;
    string productName;
    double productPrice;
};

// Function to calculate the total amount required to order a number of products
double calculateTotalAmount(const Product& product, int quantity) {
    return product.productPrice * quantity;
}

int main() {
    Product product;
    int quantity;

    cout << "Enter product number: ";
    cin >> product.productNumber;

    cin.ignore(); // Clear the input buffer
    cout << "Enter product name: ";
    getline(cin, product.productName);

    cout << "Enter product price: ";
    cin >> product.productPrice;

    cout << "Enter the quantity to order: ";
    cin >> quantity;

    double totalAmount = calculateTotalAmount(product, quantity);

    cout << "Product Details:" << endl;
    cout << "Product Number: " << product.productNumber << endl;
    cout << "Product Name: " << product.productName << endl;
    cout << "Product Price: $" << product.productPrice << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Amount: $" << totalAmount << endl;

    return 0;
}


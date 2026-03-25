#include <iostream>
using namespace std;

// Class to represent two numbers
class Numbers {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize numbers
    Numbers(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Method to add numbers
    double add() {
        return num1 + num2;
    }
};

int main() {
    double a, b;

    // Input numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Create object of Numbers class
    Numbers numbers(a, b);

    // Call add() method
    double sum = numbers.add();

    // Display result
    cout << "The sum is: " << sum << endl;

    return 0;
}
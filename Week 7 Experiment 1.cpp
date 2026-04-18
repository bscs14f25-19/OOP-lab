#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Operator + (Addition)
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Operator - (Subtraction)
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Operator * (Multiplication)
    Complex operator*(const Complex& c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    // Operator = (Assignment)
    Complex operator=(const Complex& c) {
        real = c.real;
        imag = c.imag;
        return *this;
    }

    // Display function
    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c(3, 2), b(1, 4), result;

    cout << "c = ";
    c.show();

    cout << "b = ";
    b.show();

    // Addition
    result = c + b;
    cout << "c + b = ";
    result.show();

    // Subtraction
    result = c - b;
    cout << "c - b = ";
    result.show();

    // Multiplication
    result = c * b;
    cout << "c * b = ";
    result.show();

    // Assignment
    result = c;
    cout << "After assignment (result = c): ";
    result.show();

    return 0;
}
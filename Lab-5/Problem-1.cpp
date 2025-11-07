#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void displayComplex() const {
        cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;

    cout << "Complex 1: ";
    c1.displayComplex();
    cout << "Complex 2: ";
    c2.displayComplex();
    cout << "Sum: ";
    c3.displayComplex();

    return 0;
}
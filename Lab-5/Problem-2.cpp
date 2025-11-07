#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
    int num, den;
    void simplify() {
        int common = std::gcd(num, den);
        num /= common;
        den /= common;
        if (den < 0) { num = -num; den = -den; }
    }
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) { cout << "Error: Denominator is zero." << endl; den = 1; }
        simplify();
    }
    Fraction operator+(const Fraction& o) const {
        return Fraction(num * o.den + o.num * den, den * o.den);
    }
    Fraction operator-(const Fraction& o) const {
        return Fraction(num * o.den - o.num * den, den * o.den);
    }
    Fraction operator*(const Fraction& o) const {
        return Fraction(num * o.num, den * o.den);
    }
    Fraction operator/(const Fraction& o) const {
        return Fraction(num * o.den, den * o.num);
    }
    void display() const {
        if (den == 1) cout << num << endl;
        else cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(3, 4);
    cout << "F1: "; f1.display();
    cout << "F2: "; f2.display();
    cout << "Sum: "; (f1 + f2).display();
    cout << "Diff: "; (f1 - f2).display();
    cout << "Prod: "; (f1 * f2).display();
    cout << "Quot: "; (f1 / f2).display();
    return 0;
}
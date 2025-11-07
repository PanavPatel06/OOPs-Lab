#include <iostream>
#include <stdexcept>
using namespace std;

class DivZero : public runtime_error {
public:
    DivZero(const char* msg) : runtime_error(msg) {}
};

double divide(double n, double d) {
    if (d == 0) throw DivZero("Cannot divide by zero!");
    return n / d;
}

int main() {
    try {
        cout << "10 / 2 = " << divide(10, 2) << endl;
        cout << "10 / 0 = " << divide(10, 0) << endl;
    } catch (DivZero& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b, T c) {
    T m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main() {
    cout << "Max int: " << findMax(10, 5, 20) << endl;
    cout << "Max double: " << findMax(3.5, 9.1, 2.2) << endl;
    cout << "Max char: " << findMax('A', 'Z', 'M') << endl;
    return 0;
}
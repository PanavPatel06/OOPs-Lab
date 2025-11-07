#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class MyArray {
    T* arr; int size;
public:
    MyArray(int s) : size(s) { arr = new T[s]; }
    ~MyArray() { delete[] arr; }
    void set(int i, T val) {
        if (i < 0 || i >= size) throw out_of_range("Index error in set");
        arr[i] = val;
    }
    T get(int i) const {
        if (i < 0 || i >= size) throw out_of_range("Index error in get");
        return arr[i];
    }
};

int main() {
    try {
        MyArray<int> a(5);
        a.set(0, 100);
        cout << a.get(0) << endl;
        a.get(10); 
    } catch (exception& e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}
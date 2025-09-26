#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        int id;
        string name;

    public:
        Product(int id, string name){
            cout << "Parameterized constructor called !" << "\n";
            this->id = id;
            this->name = name;
        }

        Product() : Product(0, "Unknown"){
            cout << "Default constructor delegated to parameterized constructor!" << "\n";
        }

        void displayProduct() {
            cout << "Product ID: " << id << ",\nProduct Name: " << name << "\n\n";
        }
};

int main() {
    Product p1;
    p1.displayProduct();

    Product p2(101, "Laptop");
    p2.displayProduct();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string color;
public:
    Vehicle(string c): color(c)
    {
        cout << "Vehicle constructor called\n";
    }
    
    void displayColor()
    {
        cout << "color:" << color << "\n";
    }
};

class Car : public Vehicle
{
    string model;
    int year;
public:
    Car(string c, string m, int y): Vehicle(c)
    {
        this->model = m;
        this->year = y;
        cout << "Car parameterized constructor called\n";
    }

    Car(): Car("white", "unknown", 2023)
    {
        cout << "Car default constructor called\n";
    }

    void displayCarDetails()
    {
        cout << "car:\n";
        Vehicle::displayColor();
        cout << "model:" << this->model << "\n";
        cout << "year:" << this->year << "\n";
    }
};

int main()
{
    Car c1("white", "crossover", 2024);
    c1.displayCarDetails();

    Car c2;
    c2.displayCarDetails();

    return 0;
}
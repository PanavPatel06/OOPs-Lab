#include <iostream>
using namespace std;
class Widget {
private:
    int id;
    static int objectCount;
    static int nextId;
public:
    Widget() {
        id = ++nextId;
        objectCount++;
        cout << "Widget constructor called. ID: " << id << endl;
    }
    ~Widget() {
        cout << "Widget destructor called. ID: " << id << endl;
        objectCount--;
    }
    static int getObjectCount() {
        return objectCount;
    }
};
int Widget::objectCount = 0;
int Widget::nextId = 0;
int main() {
    cout << "Current Widget count: " << Widget::getObjectCount() << endl;
    Widget w1;
    cout << "Current Widget count: " << Widget::getObjectCount() << endl;
    Widget* w2 = new Widget();
    cout << "Current Widget count: " << Widget::getObjectCount() << endl;
    {
        Widget w3;
        cout << "Current Widget count: " << Widget::getObjectCount() << endl;
    }
    cout << "Current Widget count after w3 destroyed: " << Widget::getObjectCount() << endl;
    delete w2;
    cout << "Current Widget count after w2 deleted: " << Widget::getObjectCount() << endl;
    return 0;
}
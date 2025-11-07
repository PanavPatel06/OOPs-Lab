#include <iostream>
#include <vector>
#include <string>
using namespace std;

class SmartDevice {
protected:
    string id;
public:
    SmartDevice(string i) : id(i) { cout << "Device constr: " << id << endl; }
    virtual void connect() = 0;
    virtual void status() const = 0;
    virtual ~SmartDevice() { cout << "Device destr: " << id << endl; }
};

class SmartLight : public SmartDevice {
    bool on;
    string* color;
public:
    SmartLight(string i, bool o, string c) : SmartDevice(i), on(o) {
        color = new string(c);
        cout << "Light constr" << endl;
    }
    void connect() override { cout << "Light " << id << " connected." << endl; }
    void status() const override { cout << "Light is " << (on ? "ON" : "OFF") << ", Color: " << *color << endl; }
    ~SmartLight() {
        cout << "Light destr, freeing color." << endl;
        delete color;
    }
};

class SmartSpeaker : public SmartDevice {
    int vol;
    string song;
public:
    SmartSpeaker(string i, int v, string s) : SmartDevice(i), vol(v), song(s) {
        cout << "Speaker constr" << endl;
    }
    void connect() override { cout << "Speaker " << id << " connected." << endl; }
    void status() const override { cout << "Speaker vol: " << vol << ", Playing: " << song << endl; }
    ~SmartSpeaker() { cout << "Speaker destr" << endl; }
};

int main() {
    vector<SmartDevice*> devs;
    devs.push_back(new SmartLight("L1", true, "Red"));
    devs.push_back(new SmartSpeaker("S1", 80, "Jazz"));
    cout << "\n--- Status ---" << endl;
    for (auto d : devs) { d->connect(); d->status(); }
    cout << "\n--- Cleanup ---" << endl;
    for (auto d : devs) delete d;
    return 0;
}
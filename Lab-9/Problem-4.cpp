#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Student {
public:
    int id; string name; double gpa;
    Student(int i=0, string n="", double g=0.0) : id(i), name(n), gpa(g) {}
    void show() const { cout << id << " " << name << " " << gpa << endl; }
};

void save(const vector<Student>& v) {
    ofstream f("students.dat", ios::binary);
    for (const auto& s : v) {
        f.write((char*)&s.id, sizeof(s.id));
        f.write((char*)&s.gpa, sizeof(s.gpa));
        size_t len = s.name.size();
        f.write((char*)&len, sizeof(len));
        f.write(s.name.c_str(), len);
    }
    cout << "Saved.\n";
}

void load(vector<Student>& v) {
    ifstream f("students.dat", ios::binary);
    v.clear();
    while (f.peek() != EOF) {
        Student s; size_t len;
        f.read((char*)&s.id, sizeof(s.id));
        f.read((char*)&s.gpa, sizeof(s.gpa));
        f.read((char*)&len, sizeof(len));
        s.name.resize(len);
        f.read(&s.name[0], len);
        v.push_back(s);
    }
    cout << "Loaded.\n";
}

int main() {
    vector<Student> sList;
    int ch;
    do {
        cout << "1.Add 2.List 3.Save 4.Load 5.Exit\nChoice: "; cin >> ch;
        if (ch==1) {
            int i; string n; double g;
            cout << "ID Name GPA: "; cin >> i >> n >> g;
            sList.emplace_back(i, n, g);
        }
        else if (ch==2) for(auto& s : sList) s.show();
        else if (ch==3) save(sList);
        else if (ch==4) load(sList);
    } while (ch != 5);
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main() {
    string inName, outName, line;
    cout << "Input file: "; cin >> inName;
    cout << "Output file: "; cin >> outName;
    ifstream inFile(inName);
    ofstream outFile(outName);
    set<string> lines;
    if (!inFile || !outFile) { cout << "File error." << endl; return 1; }

    while (getline(inFile, line)) lines.insert(line);
    for (const auto& l : lines) outFile << l << endl;
    cout << "Duplicates removed." << endl;
    return 0;
}
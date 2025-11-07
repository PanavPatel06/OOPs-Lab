#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string inName, outName;
    cout << "Input file: "; cin >> inName;
    cout << "Output file: "; cin >> outName;
    ifstream inFile(inName);
    ofstream outFile(outName);
    if (!inFile || !outFile) { cout << "File error." << endl; return 1; }

    char ch;
    while (inFile.get(ch)) outFile.put(toupper((unsigned char)ch));
    cout << "Done." << endl;
    return 0;
}
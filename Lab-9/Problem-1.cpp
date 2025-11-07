#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    string fname;
    cout << "Enter filename: ";
    cin >> fname;
    ifstream file(fname);
    if (!file) { cout << "Cannot open file." << endl; return 1; }

    char ch;
    int chars = 0, words = 0, sents = 0;
    bool inWord = false;
    while (file.get(ch)) {
        chars++;
        if (isspace(ch)) inWord = false;
        else if (!inWord) { inWord = true; words++; }
        if (ch == '.' || ch == '!' || ch == '?') sents++;
    }
    cout << "Chars: " << chars << "\nWords: " << words << "\nSentences: " << sents << endl;
    return 0;
}
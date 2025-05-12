#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string line;
        getline(cin, line);

        string vowels = "";
        string consonants = "";

        for (char ch : line) {
            if (ch >= 'a' && ch <= 'z') {
                if (isVowel(ch))
                    vowels += ch;
                else
                    consonants += ch;
            }
        }

        cout << vowels << endl;
        cout << consonants << endl;
    }

    return 0;
}
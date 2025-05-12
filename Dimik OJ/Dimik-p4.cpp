#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string line;
        getline(cin, line);

        int vowelCount = 0;
        for (char ch : line) {
            if (isVowel(ch)) {
                vowelCount++;
            }
        }

        cout << "Number of vowels = " << vowelCount << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        char ch;
        cin.ignore();
        getline(cin, str);
        cin >> ch;

        int count = 0;
        for (char c : str) {
            if (c == ch) {
                count++;
            }
        }

        if (count > 0) {
            cout << "Occurrence of '" << ch << "' in '" << str << "' = " << count << endl;
        } else {
            cout << "'" << ch << "' is not present" << endl;
        }
    }

    return 0;
}
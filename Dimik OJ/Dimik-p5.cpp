#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string str;
        getline(cin, str);

        reverse(str.begin(), str.end());
        cout << str << endl;
    }

    return 0;
}
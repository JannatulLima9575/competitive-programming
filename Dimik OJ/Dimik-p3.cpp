#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;       
    cin.ignore();     

    while (t--) {
        string str;
        getline(cin, str); 

        map<char, int> freq;

        for (char ch : str) {
            freq[ch]++;
        }

        for (auto it : freq) {
            cout << it.first << " = " << it.second << endl;
        }

        cout << endl;
    }

    return 0;
}

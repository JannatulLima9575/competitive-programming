// # X - Acacius and String 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int n;
        cin >> n;  // Length of the string
        string s;
        cin >> s;  // The string itself
        
        bool possible = false;
        string result;
        
        for (int i = 0; i <= n - 7; ++i) {
            // Try placing "abacaba" at position i
            bool canPlace = true;
            for (int j = 0; j < 7; ++j) {
                if (s[i + j] != '?' && s[i + j] != "abacaba"[j]) {
                    canPlace = false;
                    break;
                }
            }
            
            if (canPlace) {
                // Replace '?' with 'abacaba' at position i
                string modified_s = s;
                for (int j = 0; j < 7; ++j) {
                    modified_s[i + j] = "abacaba"[j];
                }
                
                // Check how many times "abacaba" appears
                int count = 0;
                for (int j = 0; j <= n - 7; ++j) {
                    if (modified_s.substr(j, 7) == "abacaba") {
                        count++;
                    }
                }
                
                // If there is exactly one "abacaba", replace remaining '?' with 'z'
                if (count == 1) {
                    for (int k = 0; k < n; ++k) {
                        if (modified_s[k] == '?') {
                            modified_s[k] = 'z';
                        }
                    }
                    result = modified_s;
                    possible = true;
                    break;
                }
            }
        }
        
        if (possible) {
            cout << "Yes\n" << result << endl;
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
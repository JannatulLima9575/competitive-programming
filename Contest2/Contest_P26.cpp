// # Z - Mezo Playing Zoma

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of commands
    string s;
    cin >> s;  // Read the string of commands

    int count_L = 0, count_R = 0;

    // Count the occurrences of 'L' and 'R'
    for (char c : s) {
        if (c == 'L') {
            count_L++;
        } else if (c == 'R') {
            count_R++;
        }
    }

    // The number of distinct positions Zoma may end up at
    int result = count_L + count_R + 1;
    
    cout << result << endl;
    
    return 0;
}
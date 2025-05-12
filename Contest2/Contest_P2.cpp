// # Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

/* Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1. */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool found = false;

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        found = true;
    }

    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}

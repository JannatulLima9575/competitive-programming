#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int n;
        cin >> n;

        cout << "Case " << caseNum << ":";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << " " << i;
            }
        }
        cout << endl;
    }

    return 0;
}
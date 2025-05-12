// # E - Frog Jumping

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long plus = (k + 1) / 2;  // a এর সংখ্যক বার
        long long minus = k / 2;       // b এর সংখ্যক বার

        long long position = plus * a - minus * b;
        cout << position << endl;
    }

    return 0;
}

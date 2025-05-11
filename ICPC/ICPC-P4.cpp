#include <iostream>
using namespace std;

bool isPossible(long long a, long long b, long long c, long long d) {
    return (
        (a + b + c == d) ||
        (a + b - c == d) ||
        (a + b * c == d) ||
        (a - b + c == d) ||
        (a - b - c == d) ||
        (a - b * c == d) ||
        (a * b + c == d) ||
        (a * b - c == d) ||
        (a * b * c == d) ||

        (a + (b + c) == d) ||
        (a + (b - c) == d) ||
        (a + (b * c) == d) ||
        (a - (b + c) == d) ||
        (a - (b - c) == d) ||
        (a - (b * c) == d) ||
        (a * (b + c) == d) ||
        (a * (b - c) == d)
    );
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (isPossible(a, b, c, d) || isPossible(a, c, b, d) ||
        isPossible(b, a, c, d) || isPossible(b, c, a, d) ||
        isPossible(c, a, b, d) || isPossible(c, b, a, d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
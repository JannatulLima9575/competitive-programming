// # U - Between a and b ...

#include <iostream>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    long long result;
    if (a == 0)
        result = b / x + 1;
    else
        result = b / x - (a - 1) / x;

    cout << result << '\n';
    return 0;
}
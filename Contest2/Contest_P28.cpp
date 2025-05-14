// # AB - Minimal Square

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int side1 = max(2 * a, b);
        int side2 = max(2 * b, a);
        int side3 = max(a + b, max(a, b));  // side by side or stacked

        int ans = min({side1 * side1, side2 * side2, side3 * side3});
        cout << ans << endl;
    }
    return 0;
}
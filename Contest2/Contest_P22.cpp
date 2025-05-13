// # V - Collecting Coins

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        
        int max_val = max({a, b, c});
        int required = (max_val - a) + (max_val - b) + (max_val - c);
        
        if (n >= required && (n - required) % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
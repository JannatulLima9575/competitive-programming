// # Y - Park Lighting 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;  // Read the dimensions of the park
        // Calculate the minimum number of lanterns needed
        cout << (n * m + 1) / 2 << endl;
    }
    return 0;
}

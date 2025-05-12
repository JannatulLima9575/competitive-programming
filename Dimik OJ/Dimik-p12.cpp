#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        int root = sqrt(n);
        if (root * root == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool a_div = (a % k == 0);
    bool b_div = (b % k == 0);

    if (a_div && b_div) {
        cout << "Both" << endl;
    } else if (a_div) {
        cout << "Memo" << endl;
    } else if (b_div) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}
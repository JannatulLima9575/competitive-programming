
// # check even or odd number

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}

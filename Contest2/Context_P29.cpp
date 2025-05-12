// # AC - Increment Decrement

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int x = 0;
    int max_val = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'I') {
            x++;
        } else if (S[i] == 'D') {
            x--;
        }

        if (x > max_val) {
            max_val = x;
        }
    }

    cout << max_val << endl;

    return 0;
}
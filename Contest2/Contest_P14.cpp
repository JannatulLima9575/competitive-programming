// # N - Mishka and Game

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mishkaWins = 0;
    int chrisWins = 0;

    for (int i = 0; i < n; i++) {
        int mi, ci;
        cin >> mi >> ci;

        if (mi > ci) {
            mishkaWins++;
        } else if (ci > mi) {
            chrisWins++;
        }
        // যদি সমান হয়, কিছু করবো না
    }

    if (mishkaWins > chrisWins) {
        cout << "Mishka" << endl;
    } else if (chrisWins > mishkaWins) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
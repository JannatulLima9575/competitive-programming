// # S - Police Recruits

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int event, freeOfficers = 0, untreatedCrimes = 0;

    for (int i = 0; i < n; ++i) {
        cin >> event;

        if (event == -1) {
            if (freeOfficers > 0) {
                freeOfficers--; // এক পুলিশ পাঠানো হলো
            } else {
                untreatedCrimes++; // পুলিশ ছিল না, untreated crime
            }
        } else {
            freeOfficers += event; // পুলিশ নিয়োগ
        }
    }

    cout << untreatedCrimes << endl;

    return 0;
}
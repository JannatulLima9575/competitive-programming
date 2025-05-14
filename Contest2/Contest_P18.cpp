// # R - Beautiful Year

#include <iostream>
#include <set>
using namespace std;

// ফাংশন: একটি বছরকে চেক করে সব digit আলাদা কিনা
bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit)) return false; // আগেই আছে মানে ডুপ্লিকেট
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++; // পরের বছর দেখো
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}

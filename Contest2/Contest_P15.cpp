// # O - Nearly Lucky Number

#include <iostream>
#include <string>
using namespace std;

// ফাংশন: চেক করে কোনো সংখ্যা lucky কিনা (শুধু 4 এবং 7 থাকলে true রিটার্ন করে)
bool isLucky(int number) {
    string s = to_string(number);
    for (char ch : s) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;

    // প্রতিটি ডিজিট চেক করবো
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            luckyCount++;
        }
    }

    // luckyCount lucky কিনা চেক করবো
    if (isLucky(luckyCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
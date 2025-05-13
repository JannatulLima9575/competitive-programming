// # M - Soldier and Bananas

#include <iostream>
using namespace std;

int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;

    // মোট খরচ হিসাব করা
    long long total_cost = (long long)k * w * (w + 1) / 2;

    // ধার করতে হবে কত টাকা
    long long borrow = total_cost - n;

    // যদি ধার না করতে হয়, তাহলে 0 প্রিন্ট করো
    if (borrow > 0)
        cout << borrow << endl;
    else
        cout << 0 << endl;

    return 0;
}
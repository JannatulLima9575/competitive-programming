// // # C. Even, Odd, Positive and Negative
// // Given N numbers. Count how many of these values are even, odd, positive and negative.

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int even = 0, odd = 0, positive = 0, negative = 0;

//     for (int i = 0; i < N; ++i) {
//         int x;
//         cin >> x;

//         if (x % 2 == 0)
//             even++;
//         else
//             odd++;

//         if (x > 0)
//             positive++;
//         else if (x < 0)
//             negative++;
//     }

//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative << endl;

//     return 0;
// }

// # C - Adding Reversed Numbers

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s); // leading zero remove
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        int a, b;
        cin >> a >> b;
        int rev_a = reverseNumber(a);
        int rev_b = reverseNumber(b);
        int sum = rev_a + rev_b;
        cout << reverseNumber(sum) << endl;
    }
    return 0;
}

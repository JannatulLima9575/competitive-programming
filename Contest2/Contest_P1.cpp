// # Given a number N. Print numbers from 1 to N in separate lines.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // take input

    for (int i = 1; i <= N; ++i) {
        cout << i << endl;  // print 1 from N 
    }

    return 0;
}
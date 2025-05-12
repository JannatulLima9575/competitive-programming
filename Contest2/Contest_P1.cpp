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

// # 
#include <iostream>
using namespace std;

int cycleLength(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main() {
    int i, j;

    while (cin >> i >> j) {
        int start = min(i, j);
        int end = max(i, j);

        int maxCycle = 0;

        for (int k = start; k <= end; k++) {
            int currentCycle = cycleLength(k);
            if (currentCycle > maxCycle)
                maxCycle = currentCycle;
        }

        cout << i << " " << j << " " << maxCycle << endl;
    }

    return 0;
}

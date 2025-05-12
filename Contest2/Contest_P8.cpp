// # H - Team
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of problems

    int count = 0;  // Initialize a counter for the problems they will implement

    // Loop through each problem
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;  // Read Petya's, Vasya's, and Tonya's certainty for the current problem

        // If at least two friends are sure, they will implement the solution
        if (p + v + t >= 2) {
            count++;  // Increment the counter
        }
    }

    cout << count << endl;  // Output the result
    return 0;
}

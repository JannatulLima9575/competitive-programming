#include <iostream>
using namespace std;

int main() {
    long long a, b; // Declare big variables to store the numbers
    int t; // Declare a variable to store the number of test cases
    cin >> t; // Read the number of test cases
    
    for (int i = 0; i<t ; i++) {
        cin >> a >> b; // Read the two numbers for each test case
        cout << a + b << endl; // Output the sum of the two numbers
    }
    return 0;
}
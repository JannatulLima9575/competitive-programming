#include <iostream>
using namespace std;

int main() {

        long long a, b;
        for(;;) // (;;) use for Infinite loop to keep reading pairs of numbers
        {
            cin >> a >> b;
            if(a == 0 && b == 0) {
                break; // Break the loop if both numbers are zero
            }
            else {
                cout << a + b << endl;
            }
        }
    return 0;
}
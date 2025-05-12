// # J - Vanya and Fence

#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;  // Read the number of friends (n) and the height of the fence (h)
    
    int totalWidth = 0;  // Variable to store the total width of the road
    
    // Loop through the heights of the friends
    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;  // Read the height of the i-th friend
        
        // If the friend's height is greater than the fence, they need to bend (width = 2)
        // Otherwise, the width is 1
        if (height > h) {
            totalWidth += 2;
        } else {
            totalWidth += 1;
        }
    }
    
    // Output the total width of the road required
    cout << totalWidth << endl;
    
    return 0;
}
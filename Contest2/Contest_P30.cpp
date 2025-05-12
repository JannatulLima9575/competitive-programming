// # AD - The New Year: Meeting Friends

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Read the coordinates of the three friends
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    
    // Sort the coordinates to find the median
    int positions[] = {x1, x2, x3};
    sort(positions, positions + 3);
    
    // The optimal meeting point is the median (the second element in the sorted array)
    int optimalMeetingPoint = positions[1];
    
    // Calculate the total distance they need to travel to meet at the optimal point
    int totalDistance = abs(x1 - optimalMeetingPoint) + abs(x2 - optimalMeetingPoint) + abs(x3 - optimalMeetingPoint);
    
    // Output the total distance
    cout << totalDistance << endl;
    
    return 0;
}

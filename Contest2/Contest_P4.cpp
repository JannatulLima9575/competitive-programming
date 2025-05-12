// # D - For Loops Challenge

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    string line;

    // Step 1: Read multiple lines of input
    while (getline(cin, line)) {
        if (line.empty()) continue; // skip empty lines
        stringstream ss(line);
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
    }

    // Step 2: Sort all numbers
    sort(nums.begin(), nums.end());

    // Step 3: Remove duplicates (if needed)
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    // Step 4: Find consecutive ranges and print for loops
    for (size_t i = 0; i < nums.size(); ) {
        int start = nums[i];
        int end = start;
        while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
            end = nums[i + 1];
            i++;
        }

        cout << "for (int i = " << start << "; i <= " << end << "; i++) cout << i << \" \";" << endl;

        i++;
    }

    return 0;
}

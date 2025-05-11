#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int arr[] = {a, b, c};

        sort(arr, arr + 3);

        cout << "Case " << i << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }

    return 0;
}
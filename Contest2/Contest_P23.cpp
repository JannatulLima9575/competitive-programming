// # W - Vanya and Cubes

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // cubes এর সংখ্যা ইনপুট নিন

    int total_cubes = 0;  // মোট কিউবের সংখ্যা, শুরুতে ০
    int height = 0;  // পিরামিডের উচ্চতা

    int i = 1;  // প্রথম লেভেল
    while (total_cubes + (i * (i + 1)) / 2 <= n) {
        total_cubes += (i * (i + 1)) / 2;  // i-থ লেভেলের কিউব যোগ করুন
        height++;  // উচ্চতা ১ বৃদ্ধি করুন
        i++;  // পরবর্তী লেভেলের জন্য i বৃদ্ধি করুন
    }

    cout << height << endl;  // সর্বোচ্চ উচ্চতা আউটপুট করুন
    return 0;
}
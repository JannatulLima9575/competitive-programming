#include<iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    int last_digit_sum = (N % 10) + (M % 10);

    cout << last_digit_sum << endl;

    return 0;
}
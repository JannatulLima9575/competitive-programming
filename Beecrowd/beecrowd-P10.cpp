#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number, hours;
    double rate, salary;

    cin >> number >> hours >> rate;

    salary = hours * rate;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}
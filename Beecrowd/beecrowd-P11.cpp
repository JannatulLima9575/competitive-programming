#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double fixed_salary, sales_total, total_salary;

    cin >> name >> fixed_salary >> sales_total;

    total_salary = fixed_salary + (sales_total * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total_salary << endl;

    return 0;
}
#include <iostream>
#include <iomanip>  // For controlling decimal precision

using namespace std;

int main() {
    double radius, volume;

    cin >> radius;

    volume = (4.0/3) * 3.14159 * (radius * radius * radius);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}

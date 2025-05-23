#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    cout << "TRIANGULO: " << fixed << setprecision(3) << (A * C) / 2 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * C * C << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << (A + B) * C / 2 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << B * B << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << A * B << endl;

    return 0;
}
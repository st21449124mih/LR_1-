#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14159265358979323846;
    double a, b, y;

    cout << "Введіть a та b: ";
    cin >> a >> b;

    y = (cbrt(a) * cos(exp(b) - 1.0) * (PI / 4.0)) / (0.5121 * (1.0 - log(b / a)));

    cout << "y = " << y << endl;

    return 0;
}

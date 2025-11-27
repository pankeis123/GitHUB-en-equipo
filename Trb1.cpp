#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    std::cin >> x >> y >> z;

    double numerador = ((2 * x + y) / z) * (pow(y, 3) - z);
    double denominador = (x + 2 * y + 3 * z) / (z - 2 * y - 3 * x);
    double resultado = (numerador / denominador) + pow(x, 2) + pow(z, 2);

    std::cout << resultado << std::endl;
    return 0;
}

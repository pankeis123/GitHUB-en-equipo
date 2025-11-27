#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    std::cin >> x >> y >> z;

    double arriba = pow(2 * y + z, 2.8) - z;
    double abajo = x + y - x / z;
    double resultado = arriba / abajo;

    std::cout << resultado << std::endl;

    return 0;
}

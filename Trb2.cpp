#include <iostream>
#include <iomanip>
int main() {
    double x, y;
    std::cin >> x >> y;

    double numeradorInterno = (x * x * x + x * x) / (y * y - y);
    double resta = numeradorInterno - (x / y + 5);
    double z = resta / (2 * x);

    std::cout << std::fixed << std::setprecision(6) << z << std::endl;

    return 0;
}

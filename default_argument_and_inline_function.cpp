#include <iostream>
#include <cmath>

inline int calculatePower(int base, int exponent) {
    return std::pow(base, exponent);
}

int main () {
    int base, exponent;
    std::cin >> base;
    std::cin >> exponent;

    double result = calculatePower(base, exponent);

    std::cout << "Result: " << result;

    return 0;
}
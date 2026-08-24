#include <iostream>

int main() {
    int low, high;

    std::cout << "Enter the lowest number: ";
    std::cin >> low;

    std::cout << "Enter the highest number: ";
    std::cin >> high;

    int count = 0;
    for (int i = low; i <= high; i++) {
        if (i % 2 != 0) count++;
    }

    std::cout << "The odd numbers between range is: " << count;

    return 0;
}

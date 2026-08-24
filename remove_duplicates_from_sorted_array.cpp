#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of size of array: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) count += 1;
        std::cout << arr[i] << std::endl;
    }

    std::cout << "The total unique numbers: " << count << std::endl;

    return 0;
}

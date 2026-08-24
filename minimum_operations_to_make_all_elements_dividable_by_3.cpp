#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of elements in array: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) if (arr[i] % 3 != 0) count++;

    std::cout << "there should be " << count << " operations perform.";
    return 0;
}

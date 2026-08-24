#include <iostream>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int min = INT_MAX, min_index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    std::cout << "Min: " << min << std::endl;

    int max = min;
    for (int i = min_index; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    std::cout << "Max: " << max << std::endl;

    std::cout << "The maximum profit can be done: " << max - min;

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cout << "Enter the binary string: ";
    std::cin >> S;

    int count = 0, N = S.length();
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            for (int j = i; j < N; j++) {
                if (S[j] == '1') {
                    count++;
                }
            }
        }
    }

    std::cout << "Total " << count << " substrings starts and ends with 1.";

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cout << "enter the binary string: ";
    std::cin >> S;

    int count = 0;
    for (int i = 0; i < S.length() - 1; i++) {
        if (S[i] != S[i + 1]) {
            count++;
            if (count >= 1) break;
        }
    }

    if (count >= 1) std::cout << "false";
    else std::cout << "true";

    return 0;
}

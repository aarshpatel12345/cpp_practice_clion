#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cout << "enter the binary string: ";
    std::cin >> S;

    // S = "1110000";
    // S = "0001110000";
    // S = "00000111";
    // S = "1001";

    int count = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '1') {
            if (i == 0 || S[i - 1] == '0') {
                count++;
            }
        }
    }

    if (count >= 2) std::cout << "false";
    else std::cout << "true";

    return 0;
}

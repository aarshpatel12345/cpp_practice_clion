#include <iostream>
#include <string>

int main() {
    int N;
    std::cout << "Enter the length of the string: ";
    std::cin >> N;

    std::string S;
    std::cout << "Enter the string: ";
    std::cin >> S;

    int count = 0;
    for (int i = 0; i < N; i++) {
        switch (S[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count = 0;
                break;

            default:
                count++;
                if (count >= 3) {
                    std::cout << "NO";
                    return 0;
                }
        }
    }

    std::cout << "YES";

    return 0;
}

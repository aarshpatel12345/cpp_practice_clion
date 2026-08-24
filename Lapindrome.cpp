#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;

    int half_word_size = word.size() / 2;

    int middle;
    if (word.size() % 2 == 0) {
        middle = half_word_size;
    } else {
        middle = half_word_size + 1;
    }

    int count = 0;

    for (int i = 0; i < middle; i++) {
        for (int j = middle; j < word.size(); j++) {
            if (word[i] == word[j]) {
                count++;
                word[j] = '#';
                break;
            }
        }
    }


    if (count == half_word_size) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}

#include <iostream>
using namespace std;

void counter() {
    static int count = 0;
    count++;
    cout << count << endl;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        counter();
    }

    return 0;
}
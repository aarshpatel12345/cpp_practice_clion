#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;
    
    // Read the inputs exactly as the problem specifies
    cin >> N;
    cin >> S;

    bool seen_one = false;
    bool segment_ended = false;

    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            // If we see a '1' AFTER a segment has already ended, it's invalid.
            if (segment_ended) {
                cout << "false" << endl;
                return 0; // Stop the program immediately
            }
            seen_one = true; // Mark that we are currently inside a segment of 1s
        } 
        else if (S[i] == '0') {
            // If we see a '0', AND we've previously seen a '1', the segment is over.
            if (seen_one) {
                segment_ended = true;
            }
        }
    }

    // If the loop finishes without returning false, the string is valid.
    cout << "true" << endl;
    return 0;
}
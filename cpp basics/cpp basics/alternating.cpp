#include <iostream>
using namespace std;

int minOperations(string s) {
    int change1 = 0, change2 = 0;

    for (int i = 0; i < s.length(); i++) {
        // pattern 1: 010101...
        if (s[i] != (i % 2 ? '1' : '0'))
            change1++;

        // pattern 2: 101010...
        if (s[i] != (i % 2 ? '0' : '1'))
            change2++;
    }

    return min(change1, change2);
}

int main() {
    string s;
    cin >> s;

    cout << minOperations(s);
}
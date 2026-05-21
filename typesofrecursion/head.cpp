#include <iostream>

void headRecursion(int n) {
    if (n > 0) {
        // Recursive call
        headRecursion(n - 1);
        // Print after returning
        std::cout << n << " ";
    }
}

int main() {
    int n = 3;
    headRecursion(n); // Output: 1 2 3
    return 0;
}
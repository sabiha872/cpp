#include <iostream>
using namespace std;

// Function declaration and definition
int add(int A, int B) {
    int C = A + B; // Temporary variable to hold the sum
    return C;      // Return the sum
}

int main() {
    // Declare variables
    int num1 = 10;
    int num2 = 15;
    int sum; // Variable to hold the result

    // Calling the function and storing the result
    sum = add(num1, num2);

    // Display the result
    cout << "Sum is: " << sum << endl; // Outputs: Sum is: 25
    return 0;
}
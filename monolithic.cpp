#include <iostream>
using namespace std;

int main() {
    // Declare variables for length and breadth
    int length = 0, breadth = 0;
    
    // Take input from user
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    // Print the results
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
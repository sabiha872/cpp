#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &r = a;   // r is reference variable to a

    cout << a << endl;   // Output: 10

    int b = 25;
    r = b;

    cout << a << endl;   // Output: 25

    return 0;
}
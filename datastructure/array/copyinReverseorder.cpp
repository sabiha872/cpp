#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int copy[5];

    int n = 5;

    for(int i=0; i<n; i++) {

        copy[i] = arr[n-1-i];

    }

    for(int i=0; i<n; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}
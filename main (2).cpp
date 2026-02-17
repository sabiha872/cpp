/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[0], int size) {
    cout<<"array elements ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i<size; i++) {
        sum+= arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, size);
    
    int totalSum = sumArray(arr, size);
    cout<<"sum of array elemnts: "<<totalSum << endl;
    return 0;
}
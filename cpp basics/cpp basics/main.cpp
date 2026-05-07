/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int count_set_bits(int n) {
    int count = 0;
    while(n) {
        count = count + (n & 1); // check if last bit is 1
        n>>=1; // shifts bits to right
    }
    return count;
}
int main() {
    int a,b;
    //input
    cout<<"enter a:";
    cin>> a;
    cout<<"Enter b: ";
    cin >> b;
    
    int total = count_set_bits(a) + count_set_bits(b);
    
    cout<< "total no of set bit in a and b: " << total << endl;
    
    return 0;
}
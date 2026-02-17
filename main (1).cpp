/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

 void printArray(int arr[], int size) {
     cout<<"print array" << endl;
     for(int i =0; i< size; i++) {
         cout<<arr[i]<<" ";
     }
     cout << "printing the array"<<endl;
 }

int main() {
    //declare
    int number[15];
    
    // accessing an array
    cout<< number[0]<<endl;
    
    // initialization an array
    int second[3] = {5,7,11};
    cout<<second[1]<<endl; 
    //accessing an element
    int third[15] = {2,7};
    int n = 15;
    printArray(third , 15);
    
    int fifth[10] = {1};
    
    n = 10;
    cout<<"array" << endl;
    printArray(fifth , 10);
    int fifthsize = sizeof(fifth)/ sizeof(int);
    cout<<"size of fifth is " << fifthsize<<endl;
    char ch[5]={'a', 'b' ,'c' , 'r' , 'p' };
    cout << ch[3] << endl;
    
    cout<< endl << "fine" << endl<< endl;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

bool search(int arr[],  int size, int key) {
    
    for(int i = 0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
            
        }
    }
    return 0;
}

in7t main() {
    int arr[] = {5,7,-2,10,22,-2,0,5,22,1};
    //whether 1 is present in it or not
    cout << "enter the element for search for" << endl;
    int key;
    cin>>key;
    bool found = search(arr, 10 , key);
    if(found) {
        cout<<"find"<< endl;
    }
        else {
            cout<<"not find"<<endl;
       
    }

    return 0;
}
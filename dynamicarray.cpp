#include <iostream>
using namespace std;

class ListManual {
private:
    int* elements;
    int capacity;
    int size;

public:
    ListManual(int cap) : capacity(cap), size(0) {
        elements = new int[capacity];
    }

    void add(int element) {
        if (size < capacity) {
            elements[size++] = element;
        } else {
            cout << "List is full!\n";
        }
    }

    void display() {
        for (int i = 0; i < size; ++i) cout << elements[i] << " ";
        cout << "\n";
    }

    ~ListManual() {
        delete[] elements;
    }
};

int main() {
    ListManual list(5);
    list.add(10);
    list.add(20);
    list.add(30);
    cout << "List: ";
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

Rectangle* createRectangle() {
    Rectangle* p = new Rectangle;
    p->length = 15;
    p->breadth = 7;
    return p;
}

int main() {
    Rectangle* r = createRectangle();
    cout << "Length: " << r->length << ", Breadth: " << r->breadth << endl;
    delete r;
    return 0;
}
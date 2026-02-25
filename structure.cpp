#include <iostream>
using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

int main() {
  Rectangle r = {10, 5};
  cout<< "Length:" <<r.length << endl;
  cout << "Breadth: " << r.breadth<<endl;
  return 0;
}
#include <iostream>
using namespace std;
// function to calculate area and perimeter of rectangle
int area(int length, int breadth) {
  return length * breadth;
}
// function to calculate perimeter of rectangle
int perimeter(int length, int breadth) {
  return 2 * (length + breadth);
}
int main() {
  int length, breadth;

  cout << "Enter Length: ";
  cin >> length;
  cout << "Enter Breadth: ";
  cin >> breadth;

  cout << "Area = " << area(length, breadth) << endl;
  cout << "Perimeter = " << perimeter(length, breadth) << endl;
  return 0;
}
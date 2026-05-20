#include <iostream>
using namespace std;

class Rectangle {
  private:
  float length;
  float breadth;
  public:
  Rectangle() : length(0), breadth(0) {}
  Rectangle(float l, float b) {
    length = l;
    breadth = b;

  }
  float area() {
    return length * breadth;
   
    
  }
  
  float perimeter() {
    return 2 * (length + breadth);
  }
  void setLength(float l) { length = l;}
  void setBreadth(float b) { breadth = b; }
  float getLLength() {return length; }
  float getBreadth() { return breadth; }
  ~Rectangle() {
      cout << "Destructor called" << endl;
  }


}; int main() {
  Rectangle rect1;
  Rectangle rect2(5,3);

  cout << "Area: " << rect2.area() << endl;
  cout << "Perimeter: " << rect2.perimeter() << endl;
  return 0; 
}
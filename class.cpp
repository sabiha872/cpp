#include <iostream>
using namespace std;
class Rectangle {
  private:
     int length;
     int breadth;
  public:
      void initialize(int l, int b) {
          length = l;
          breadth = b;
      }
      int area() {
        return length * breadth;

      }
      int perimeter() {
        return 2 * (length + breadth);
      }
      void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
      }
      
};  
        int main() {
            Rectangle r;
            r.initialize(10, 5);
            r.display();
            cout << "Area: " << r.area() << endl;
            cout << "Perimeter: " << r.perimeter() << endl;
            return 0;
        }
      
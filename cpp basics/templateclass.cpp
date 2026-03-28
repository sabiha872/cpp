 #include <iostream>
 using namespace std;

 template <class T>
 class Calculator {
  private:
      T a, b;
      public: 
      Calculator(T x, T y) {
          a = x;
          b = y;
      }
      T add() {
          return a + b;
      }
      T subtract() {
        return a-b;
      }
 };
 int main() {
  Calculator<int> intCalc(10, 5);
  cout << "Integer Addition: " << intCalc.add() << endl;
  cout << "Int Add: " << intCalc.add() << endl;
  cout << "Int Subtract: " << intCalc.subtract() << endl;
  //  Float 

  // Float
    Calculator<float> c2(10.5, 4.5);
    cout << "Float Add: " << c2.add() << endl;
    cout << "Float Sub: " << c2.subtract() << endl;

    return 0;
}
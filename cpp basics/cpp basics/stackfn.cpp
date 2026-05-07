#include <iostream>
using namespace std;
void functionTwo(int i) {
  int a = i*2;
  cout << "Function two : a =" << a << endl;
}
void functionOne() {
  int x = 5;
  functionTwo(x);
}
int main() {
  functionOne();
  return 0;
}
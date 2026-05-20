#include <iostream>
using namespace std;

void tailRecursion(int n) {
  if(n>0) {
    cout << n << " ";
    tailRecursion(n-1); 
  }
}
int main() {
  tailRecursion(5);
  return 0;
}
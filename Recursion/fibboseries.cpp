#include <iostream>
using namespace std;
int fibb(int n) {
  if(n<=1) return n;
  int prev2 = 0, prev1 = 1, fib;
  for(int i = 2; i<=n; i++) {
    fib = prev1 + prev2;
    prev2 = prev1;
    prev1 = fib;
  }
  return fib;
}
int main() {
  int n = 10;
  cout << "Fibonacci series up to " << n << " terms: "<<fibb(n) << endl;
  return 0;
}
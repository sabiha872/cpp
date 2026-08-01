#include <iostream>
using namespace std;

double E(int x, int nTerms) {
  static double P = 1, F = 1, n = 0;
  // base case
  if( n == nTerms)
  return 0;
  double result = E(x, nTerms);
  double term = P/F; // cal x^n / n!term
  
  //update static variable for next recursive call
  P *= x; // update power
  F *= (n + 1); // update factorial
  n++; // update term count
  return result + term;

};
int main() {
  int x = 1;
  int nTerms = 10;

  double result = E(x, nTerms);
  cout<<"e^" << x << "=" << result << endl;

  return 0;
}
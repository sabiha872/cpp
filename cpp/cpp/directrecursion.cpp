// #include <iostream>
// using namespace std;
// void fun(int n) {
//   if(n>0) {
//     cout << n << " ";
//     fun(n-1); 
//   }
// }
// int main() {
//   fun(5);
  
// }
#include <iostream>
using namespace std;

void funB(int n) ;

void funA(int n) {
  if(n>0) {
    cout << n << " ";
    funB(n-1); 
  }
}
void funB(int n) {
  if (n>0) {
    funA(n-1); 
    cout << n << " ";
  }
}
int main() {
  funA(7);

}
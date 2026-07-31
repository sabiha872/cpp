#include <iostream>
#include <vector>
using namespace std;

int sum(int N) {
   if(N == 0) return 0;
   return sum(N-1) + N;

}
int main() {
  int N;
  cout<<"enter a natural number: ";
  cin>>N;
  cout<<"sum of first "<<N<<" natural numbers is: "<<sum(N)<<endl;
  return 0;
}
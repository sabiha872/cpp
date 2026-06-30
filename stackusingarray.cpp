#include <iostream>
using namespace std;

class Stack {
  private:
      int* arr;
      int top;
      int maxSize;

  public:
     Stack(int size) {
        maxSize = size;
       arr = new int[maxSize];
       top = -1;
  }
  void push(int value) {
      if(top >= maxSize - 1) {
         cout << "Stack Overflow" << endl;
         return;
      }
     arr[++top] = value;
     cout<<"pushed: " << value << endl;
  }
    int pop() {
        if (top < 0) {
          cout << "Stack Underflow" << endl;
        }
          return -1;
       }
    int peek() {
        if (top < 0) {
           cout << "Stack is empty" << endl;
           return -1;
         }
         return arr[top];
        }
    
    bool isEmpty() {
      return top < 0;
    }
    ~Stack() {
      delete[] arr;
    }
  };
  int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    cout << "Popped: " << stack.pop() << endl;
    return 0;
  }

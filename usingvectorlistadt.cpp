#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;
class List {
private:
  vector<int> elements;

public:
   void add(int element) {
    elements.push_back(element);
   }

   void insert(int index, int value) {
       if(index < 0  || index > elements.size()) {
          cout << "Index out of bounds.\n";
          return;
    }
    elements.insert(elements.begin() + index, value);
   }

   void removeValue(int value) {
      elements.erase(remove(elements.begin(), elements.end(), value),elements.end());
   }

   void removeAt(int index) {
       if(index >= 0 && index < elements.size()) {
      elements.erase(elements.begin() + index);
    }
  }
    int get(int index) {
      if(index >= 0 && index < elements.size()) {
        return elements[index];
      }
      throw out_of_range("Index out of bounds");
      }

      void set(int index , int value) {
        if(index >= 0 && index < elements.size()) {
          elements[index] = value;
        }
      }

        int search(int value) {
          auto it = find(elements.begin(), elements.end(), value);
          return(it!= elements.end())  ? distance(elements.begin(), it): -1;
        }

        int size() {
          return elements.size();
        }

        bool isEmpty() {
          return elements.empty();
        }

        void sortList() {
          sort(elements.begin(), elements.end());
        }

        void reverseList() {
          reverse(elements.begin(), elements.end());
        }

        void display() {
         for(int val: elements) cout << val << " " ;
         cout << "\n";
        }
      };

      int main() {
        List myList;

        myList.add(10);
        myList.add(20);
        myList.insert(1, 15);
        myList.display();

        myList.removeValue(15);
        myList.display(); //10,20

        myList.set(0, 25);
        myList.display(); //25,20

        cout<< "Index of 20: " << myList.search(20) << endl; //1
        myList.sortList();
        myList.display();
      }
    

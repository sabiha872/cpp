#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void grade() {
        if (marks >= 90)
            cout << "Grade: A" << endl;
        else if (marks >= 75)
            cout << "Grade: B" << endl;
        else if (marks >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();
    s.grade();

    return 0;
}
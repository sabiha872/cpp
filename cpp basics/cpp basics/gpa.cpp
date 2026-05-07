#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float gpa;
};

float calculateAverage(Student students[], int size) {
    if (size == 0) return 0;
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += students[i].gpa;
    }
    return sum / size;
}

int main() {
    const int n = 3;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> students[i].roll;
        cin.ignore(); // important
        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter GPA for student " << i + 1 << ": ";
        cin >> students[i].gpa;
    }

    float average = calculateAverage(students, n);
    cout << "\nAverage GPA of the students: " << average << endl;

    cout << "Student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << students[i].roll 
             << ", Name: " << students[i].name 
             << ", GPA: " << students[i].gpa << endl;
    }

    return 0;
}
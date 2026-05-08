#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

public:
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks 1: ";
        cin >> marks1;

        cout << "Enter Marks 2: ";
        cin >> marks2;

        cout << "Enter Marks 3: ";
        cin >> marks3;
    }

    int calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();

    return 0;
}
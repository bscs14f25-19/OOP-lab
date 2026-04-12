#include <iostream>
#include <string>
using namespace std;

// Define structure
struct Student {
    string name;
    int rollNo;
    int marks1;
    int marks2;
    int marks3;
};

int main() {
    Student s;
    int total;

    // Input values
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks of 3 subjects: ";
    cin >> s.marks1 >> s.marks2 >> s.marks3;

    // Calculate total
    total = s.marks1 + s.marks2 + s.marks3;

    // Display output
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks1 << ", " 
         << s.marks2 << ", " << s.marks3 << endl;
    cout << "Total Marks: " << total << endl;

    return 0;
}

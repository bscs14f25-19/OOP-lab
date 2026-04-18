#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string firstName;
    string lastName;
    string studentClass;
    float marks;
    char grade;

public:
    // Default Constructor
    Student() {
        rollNumber = 0;
        firstName = "N/A";
        lastName = "N/A";
        studentClass = "N/A";
        marks = 0.0;
        grade = 'F';
    }

    // Parameterized Constructor
    Student(int r, string f, string l, string c, float m, char g) {
        rollNumber = r;
        firstName = f;
        lastName = l;
        studentClass = c;
        marks = m;
        grade = g;
    }

    // Copy Constructor
    Student(const Student& s) {
        rollNumber = s.rollNumber;
        firstName = s.firstName;
        lastName = s.lastName;
        studentClass = s.studentClass;
        marks = s.marks;
        grade = s.grade;
    }

    // Friend function to display data using address
    friend void DisplayClassData(const Student* s);
};

// Function to display private data using pointer
void DisplayClassData(const Student* s) {
    cout << "Roll Number: " << s->rollNumber << endl;
    cout << "First Name: " << s->firstName << endl;
    cout << "Last Name: " << s->lastName << endl;
    cout << "Class: " << s->studentClass << endl;
    cout << "Marks: " << s->marks << endl;
    cout << "Grade: " << s->grade << endl;
    cout << "------------------------" << endl;
}

int main() {
    // Default object
    Student s1;
    cout << "Default Student:\n";
    DisplayClassData(&s1);

    // Parameterized object
    Student s2(101, "Ali", "Khan", "BSCS", 85.5, 'A');
    cout << "Parameterized Student:\n";
    DisplayClassData(&s2);

    // Copy constructor
    Student s3 = s2;
    cout << "Copied Student (Copy Constructor):\n";
    DisplayClassData(&s3);

    // Member-wise assignment
    Student s4;
    s4 = s2;
    cout << "Assigned Student (Member-wise Assignment):\n";
    DisplayClassData(&s4);

    return 0;
}
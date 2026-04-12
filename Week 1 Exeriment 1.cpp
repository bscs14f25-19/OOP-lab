#include <iostream>
#include <string>
using namespace std;

// Declare structure
struct Student {
    int studentID;
    string studentName;
    string courseCode;
    string courseName;
    int courseMarks;
};

int main() {
    // Declare and initialize structure variable
    Student s1;

    // Assign values
    s1.studentID = 101;
    s1.studentName = "Aiman Arif";
    s1.courseCode = "CS101";
    s1.courseName = "Computer Science";
    s1.courseMarks = 85;

    // Display values
    cout << "Student ID: " << s1.studentID << endl;
    cout << "Student Name: " << s1.studentName << endl;
    cout << "Course Code: " << s1.courseCode << endl;
    cout << "Course Name: " << s1.courseName << endl;
    cout << "Course Marks: " << s1.courseMarks << endl;

    return 0;
}

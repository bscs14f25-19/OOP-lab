#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Mutator functions (setters)
    void setName(string n) {
        name = n;
    }

    void setID(int id) {
        idNumber = id;
    }

    void setDepartment(string d) {
        department = d;
    }

    void setPosition(string p) {
        position = p;
    }

    // Accessor functions (getters)
    string getName() {
        return name;
    }

    int getID() {
        return idNumber;
    }

    string getDepartment() {
        return department;
    }

    string getPosition() {
        return position;
    }

    // Display function
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "ID Number: " << getID() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Position: " << getPosition() << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Create 3 employee objects
    Employee e1, e2, e3;

    // Assign data to employee 1
    e1.setName("Ali");
    e1.setID(101);
    e1.setDepartment("IT");
    e1.setPosition("Developer");

    // Assign data to employee 2
    e2.setName("Sara");
    e2.setID(102);
    e2.setDepartment("HR");
    e2.setPosition("Manager");

    // Assign data to employee 3
    e3.setName("Ahmed");
    e3.setID(103);
    e3.setDepartment("Finance");
    e3.setPosition("Analyst");

    // Display all employees
    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();
    e3.display();

    return 0;
}
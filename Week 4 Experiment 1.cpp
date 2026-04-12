#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // 1. Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // 2. Constructor with all parameters
    Employee(string n, int id, string d, string p) {
        name = n;
        idNumber = id;
        department = d;
        position = p;
    }

    // 3. Constructor with name and ID only
    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    // Setters (Mutators)
    void setName(string n) { name = n; }
    void setID(int id) { idNumber = id; }
    void setDepartment(string d) { department = d; }
    void setPosition(string p) { position = p; }

    // Getters (Accessors)
    string getName() { return name; }
    int getID() { return idNumber; }
    string getDepartment() { return department; }
    string getPosition() { return position; }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    // Using different constructors

    Employee e1("Ali", 101, "IT", "Developer");
    Employee e2("Sara", 102);  // department & position empty
    Employee e3;               // default constructor

    // Set remaining data for e2
    e2.setDepartment("HR");
    e2.setPosition("Manager");

    // Set all data for e3
    e3.setName("Ahmed");
    e3.setID(103);
    e3.setDepartment("Finance");
    e3.setPosition("Analyst");

    // Display employees
    cout << "\n--- Employee Records ---\n";
    e1.display();
    e2.display();
    e3.display();

    return 0;
}
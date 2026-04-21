#include <iostream>
using namespace std;
// Base class
class Employee {
protected:
    string name;
    int empNumber;
    string hireDate;
public:
    void getEmployee() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter hire date: ";
        cin >> hireDate;
    }
    void showEmployee() {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Hire Date: " << hireDate << endl;
    }
};
// Derived class
class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    void getdata() {
        getEmployee();
        cout << "Enter annual salary: ";
        cin >> annualSalary;

        cout << "Enter annual bonus: ";
        cin >> annualBonus;
    }

    void putdata() {
        showEmployee();

        cout << "Annual Salary: " << annualSalary << endl;
        cout << "Annual Bonus: " << annualBonus << endl;
    }
};
// Main function
int main() {
    ShiftSupervisor s;
    cout << "ENTER SHIFT SUPERVISOR DATA\n";
    s.getdata();
    cout << "\nDISPLAY SHIFT SUPERVISOR DATA\n";
    s.putdata();
    return 0;
}
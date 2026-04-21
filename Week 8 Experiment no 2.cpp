#include <iostream>
using namespace std;
// Base class
class Employee {
protected:
    string name;
    int empNumber;
    string hireDate;
public:
    Employee() {
        name = "";
        empNumber = 0;
        hireDate = "";
    }
    void setEmployee(string n, int e, string h) {
        name = n;
        empNumber = e;
        hireDate = h;
    }
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
class ProductionWorker : public Employee {
private:
    int shift;        // 1 = Day, 2 = Night
    double payRate;
public:
    ProductionWorker() {
        shift = 0;
        payRate = 0;
    }
    void getdata() {
        getEmployee();
        cout << "Enter shift (1=Day, 2=Night): ";
        cin >> shift;
        cout << "Enter hourly pay rate: ";
        cin >> payRate;
    }
    void putdata() {
        showEmployee();
        cout << "Shift: ";
        if (shift == 1)
            cout << "Day" << endl;
        else if (shift == 2)
            cout << "Night" << endl;
        else
            cout << "Invalid shift" << endl;
        cout << "Hourly Pay Rate: " << payRate << endl;
    }
};
int main() {
    ProductionWorker p;
    cout << "ENTER EMPLOYEE DATA\n";
    p.getdata();
    cout << "\nDISPLAY EMPLOYEE DATA\n";
    p.putdata();
    return 0;
}
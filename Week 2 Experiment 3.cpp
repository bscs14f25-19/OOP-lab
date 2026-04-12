#include <iostream>
using namespace std;

// Define structure
struct Employee {
    int empNumber;
    float salary;
};

// Function to display employee data
void display(Employee e) {
    cout << "Employee Number: " << e.empNumber << endl;
    cout << "Salary: $" << e.salary << endl;
    cout << "------------------------" << endl;
}

int main() {
    Employee e[3];

    // Input data for 3 employees
    for (int i = 0; i < 3; i++) {
        cout << "Enter details of Employee " << i + 1 << endl;
        cout << "Employee Number: ";
        cin >> e[i].empNumber;
        cout << "Salary: ";
        cin >> e[i].salary;
        cout << endl;
    }

    // Display data using function
    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 3; i++) {
        display(e[i]);
    }

    return 0;
}

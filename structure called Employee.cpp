#include <iostream>
using namespace std;
struct Employee {
    int empNumber;
    float compensation;
};
void display(Employee e) {
    cout << "Employee Number: " << e.empNumber << endl;
    cout << "Compensation: $" << e.compensation << endl;
}
int main() {
    Employee e1, e2, e3;
    cout << "Enter employee number and compensation: ";
    cin >> e1.empNumber >> e1.compensation;
    cout << "Enter employee number and compensation: ";
    cin >> e2.empNumber >> e2.compensation;
    cout << "Enter employee number and compensation: ";
    cin >> e3.empNumber >> e3.compensation;
    display(e1);
    display(e2);
    display(e3);

    return 0;
}

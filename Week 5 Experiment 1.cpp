#include <iostream>
using namespace std;

class Payroll {
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;

public:
    // Constructor
    Payroll() {
        hourlyRate = 20.0;   // you can change rate if needed
        hoursWorked = 0;
        totalPay = 0;
    }

    // Set hours with validation
    void setHours(double h) {
        if (h > 60)
            hoursWorked = 60;   // input validation
        else if (h < 0)
            hoursWorked = 0;
        else
            hoursWorked = h;
    }

    // Calculate pay
    void calculatePay() {
        totalPay = hourlyRate * hoursWorked;
    }

    // Get pay
    double getPay() {
        return totalPay;
    }

    // Get hours
    double getHours() {
        return hoursWorked;
    }
};

int main() {
    Payroll employee[7];  // array of 7 employees

    double hours;

    // Input hours for 7 employees
    for (int i = 0; i < 7; i++) {
        cout << "Enter hours worked by Employee " << i + 1 << ": ";
        cin >> hours;

        employee[i].setHours(hours);
        employee[i].calculatePay();
    }

    // Display results
    cout << "\n--- Payroll Report ---\n";
    for (int i = 0; i < 7; i++) {
        cout << "Employee " << i + 1
            << " | Hours: " << employee[i].getHours()
            << " | Gross Pay: $" << employee[i].getPay()
            << endl;
    }

    return 0;
}

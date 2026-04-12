#include <iostream>
using namespace std;

// Define structure
struct Date {
    int month;
    int day;
    int year;
};

int main() {
    Date d;
    char slash1, slash2;

    // Input in format MM/DD/YYYY
    cout << "Enter date (MM/DD/YYYY): ";
    cin >> d.month >> slash1 >> d.day >> slash2 >> d.year;

    // Output in same format
    cout << "You entered: ";
    cout << d.month << "/" << d.day << "/" << d.year << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Declare structure
struct Date {
    int month;
    int day;
    int year;
};

int main() {
    Date d;

    cout << "Enter date (MM/DD/YYYY): ";

    // Taking input with '/' separator
    char slash1, slash2;
    cin >> d.month >> slash1 >> d.day >> slash2 >> d.year;

    // Display the date
    cout << "Entered Date: ";
    cout << d.month << "/" << d.day << "/" << d.year << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

    string monthName(int m) {
        string names[] = {
            "", "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        return names[m];
    }

public:
    void inputDate() {
        // Input validation for month
        do {
            cout << "Enter month (1-12): ";
            cin >> month;
        } while (month < 1 || month > 12);

        // Input validation for day
        do {
            cout << "Enter day (1-31): ";
            cin >> day;
        } while (day < 1 || day > 31);

        cout << "Enter year: ";
        cin >> year;
    }

    void printFormat1() {
        cout << month << "/" << day << "/" << year << endl;
    }

    void printFormat2() {
        cout << monthName(month) << " " << day << ", " << year << endl;
    }

    void printFormat3() {
        cout << day << " " << monthName(month) << " " << year << endl;
    }
};

int main() {
    Date d;

    d.inputDate();

    cout << "\n--- Date Formats ---\n";
    d.printFormat1();
    d.printFormat2();
    d.printFormat3();

    return 0;
}

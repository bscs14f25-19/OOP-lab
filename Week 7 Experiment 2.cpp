#include <iostream>
#include <string>
using namespace std;

class Month {
private:
    string name;
    int monthNumber;

    // Helper function to convert number → name
    string getMonthName(int num) {
        string months[] = { "January","February","March","April","May","June",
                           "July","August","September","October","November","December" };
        return months[num - 1];
    }

    // Helper function to convert name → number
    int getMonthNumber(string n) {
        string months[] = { "January","February","March","April","May","June",
                           "July","August","September","October","November","December" };
        for (int i = 0; i < 12; i++) {
            if (months[i] == n)
                return i + 1;
        }
        return 1; // default
    }

public:
    // Default constructor
    Month() {
        monthNumber = 1;
        name = "January";
    }

    // Constructor with name
    Month(string n) {
        name = n;
        monthNumber = getMonthNumber(n);
    }

    // Constructor with number
    Month(int num) {
        monthNumber = num;
        name = getMonthName(num);
    }

    // Setters
    void setName(string n) {
        name = n;
        monthNumber = getMonthNumber(n);
    }

    void setMonthNumber(int num) {
        if (num >= 1 && num <= 12) {
            monthNumber = num;
            name = getMonthName(num);
        }
    }

    // Getters
    string getName() {
        return name;
    }

    int getMonthNumber() {
        return monthNumber;
    }

    // Prefix ++
    Month operator++() {
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;
        name = getMonthName(monthNumber);
        return *this;
    }

    // Postfix ++
    Month operator++(int) {
        Month temp = *this;
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;
        name = getMonthName(monthNumber);
        return temp;
    }

    // Prefix --
    Month operator--() {
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;
        name = getMonthName(monthNumber);
        return *this;
    }

    // Postfix --
    Month operator--(int) {
        Month temp = *this;
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;
        name = getMonthName(monthNumber);
        return temp;
    }

    // Overload <<
    friend ostream& operator<<(ostream& out, const Month& m) {
        out << m.name << " (" << m.monthNumber << ")";
        return out;
    }

    // Overload >>
    friend istream& operator>>(istream& in, Month& m) {
        cout << "Enter month name: ";
        in >> m.name;
        m.monthNumber = m.getMonthNumber(m.name);
        return in;
    }
};

int main() {
    Month m1;            // Default
    Month m2("March");   // By name
    Month m3(10);        // By number

    cout << "Default: " << m1 << endl;
    cout << "By name: " << m2 << endl;
    cout << "By number: " << m3 << endl;

    // Increment
    ++m1;
    cout << "After prefix ++: " << m1 << endl;

    m1++;
    cout << "After postfix ++: " << m1 << endl;

    // Decrement
    --m2;
    cout << "After prefix --: " << m2 << endl;

    m2--;
    cout << "After postfix --: " << m2 << endl;

    // Input
    Month m4;
    cin >> m4;
    cout << "You entered: " << m4 << endl;

    return 0;
}
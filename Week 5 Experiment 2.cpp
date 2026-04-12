#include <iostream>
using namespace std;

class Travel {
private:
    int kilometer;
    int hour;

public:
    // Constructor
    Travel() {
        kilometer = 0;
        hour = 0;
    }

    // Destructor
    ~Travel() {
        // (Optional cleanup)
    }

    // Input function
    void input() {
        cout << "Enter kilometers: ";
        cin >> kilometer;
        cout << "Enter hours: ";
        cin >> hour;
    }

    // Show function
    void show() {
        cout << "Kilometers: " << kilometer << endl;
        cout << "Hours: " << hour << endl;
    }

    // Add function (object as parameter)
    void add(Travel p) {
        int totalKm = kilometer + p.kilometer;
        int totalHr = hour + p.hour;

        cout << "\n--- Added Values ---" << endl;
        cout << "Total Kilometers: " << totalKm << endl;
        cout << "Total Hours: " << totalHr << endl;
    }
};

int main() {
    Travel t1, t2;

    cout << "Enter data for Travel 1:\n";
    t1.input();

    cout << "\nEnter data for Travel 2:\n";
    t2.input();

    cout << "\n--- Travel 1 Data ---\n";
    t1.show();

    cout << "\n--- Travel 2 Data ---\n";
    t2.show();

    // Calling add function
    t1.add(t2);

    return 0;
}
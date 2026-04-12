#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Set feet
    void setFeet(int f) {
        feet = f;
    }

    // Set inches
    void setInches(float i) {
        inches = i;

        // Convert if inches >= 12
        if (inches >= 12.0) {
            feet += (int)(inches / 12);
            inches = (int)inches % 12 + (inches - (int)inches);
        }
    }

    // Display distance
    void showDistance() {
        cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d;

    int f;
    float i;

    cout << "Enter feet: ";
    cin >> f;

    cout << "Enter inches: ";
    cin >> i;

    d.setFeet(f);
    d.setInches(i);

    cout << "\n--- Result ---\n";
    d.showDistance();

    return 0;
}

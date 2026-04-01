#include <iostream>
using namespace std;

class Capital {
private:
    static int count; // static data member to count objects

public:
    // Constructor
    Capital() {
        count++; // Increment count whenever an object is created
    }

    // Function to display current count
    void show() const {
        cout << "Number of objects created: " << count << endl;
    }
};

// Definition of static member outside the class
int Capital::count = 0;

int main() {
    Capital x;  // Object 1
    x.show();   // Should show 1

    Capital y;  // Object 2
    y.show();   // Should show 2

    Capital z;  // Object 3
    z.show();   // Should show 3

    // Alternatively, you can also call show() using any object, it's shared
    cout << "Final count using x: "; x.show();

    return 0;
}
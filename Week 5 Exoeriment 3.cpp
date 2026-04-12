#include <iostream>
using namespace std;

class Capital {
private:
    static int count;   // static data member

public:
    // Constructor
    Capital() {
        count++;   // increase count when object is created
    }

    // Show function
    void show() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Definition of static data member outside the class
int Capital::count = 0;

int main() {
    // Creating objects
    Capital x;
    Capital y;
    Capital z;

    // Display result using any object
    z.show();

    return 0;
}
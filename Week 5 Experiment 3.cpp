#include <iostream>
using namespace std;

class Capital {
public:
    static int count;   // static data member declaration

    Capital() {
        count++;        // increases when object is created
    }

    void show() {
        cout << "Total objects created: " << count << endl;
    }
};

// definition of static member outside the class
int Capital::count = 0;

int main() {
    Capital x;
    Capital y;
    Capital z;

    z.show();   // shows total objects created

    return 0;
}

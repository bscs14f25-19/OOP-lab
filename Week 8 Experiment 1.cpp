
#include <iostream>
using namespace std;
class Publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
class Book : public Publication {
    int pages;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }
    void putdata() {
        Publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};
class Tape : public Publication {
    float time;

public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> time;
    }
    void putdata() {
        Publication::putdata();
        cout << "Time: " << time << " minutes" << endl;
    }
};
int main() {
    Book b;
    Tape t;
    cout << "BOOK INPUT\n";
    b.getdata();
    cout << "\nTAPE INPUT\n";
    t.getdata();
    cout << "\nBOOK DETAILS\n";
    b.putdata();
    cout << "\nTAPE DETAILS\n";
    t.putdata();
    return 0;
}
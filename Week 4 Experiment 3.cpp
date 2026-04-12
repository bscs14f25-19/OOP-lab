#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    // Constructor with parameters
    Inventory(int itemNo, int qty, double c) {
        setItemNumber(itemNo);
        setQuantity(qty);
        setCost(c);
        setTotalCost();
    }

    // Setter functions with validation
    void setItemNumber(int itemNo) {
        if (itemNo < 0)
            itemNumber = 0;
        else
            itemNumber = itemNo;
    }

    void setQuantity(int qty) {
        if (qty < 0)
            quantity = 0;
        else
            quantity = qty;
    }

    void setCost(double c) {
        if (c < 0)
            cost = 0.0;
        else
            cost = c;
    }

    // Calculate total cost
    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Getter functions
    int getItemNumber() {
        return itemNumber;
    }

    int getQuantity() {
        return quantity;
    }

    double getCost() {
        return cost;
    }

    double getTotalCost() {
        return totalCost;
    }

    // Display function
    void display() {
        cout << "Item Number: " << getItemNumber() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Cost: " << getCost() << endl;
        cout << "Total Cost: " << getTotalCost() << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Inventory item1, item2;

    int itemNo, qty;
    double cost;

    // Input for first item
    cout << "Enter details for Item 1:" << endl;
    cout << "Item Number: ";
    cin >> itemNo;
    cout << "Quantity: ";
    cin >> qty;
    cout << "Cost: ";
    cin >> cost;

    item1.setItemNumber(itemNo);
    item1.setQuantity(qty);
    item1.setCost(cost);
    item1.setTotalCost();

    // Input for second item
    cout << "\nEnter details for Item 2:" << endl;
    cout << "Item Number: ";
    cin >> itemNo;
    cout << "Quantity: ";
    cin >> qty;
    cout << "Cost: ";
    cin >> cost;

    item2.setItemNumber(itemNo);
    item2.setQuantity(qty);
    item2.setCost(cost);
    item2.setTotalCost();

    // Display results
    cout << "\n--- Inventory Details ---\n";
    item1.display();
    item2.display();

    return 0;
}

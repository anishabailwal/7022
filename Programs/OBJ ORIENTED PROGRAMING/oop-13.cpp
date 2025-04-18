#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Inventory {
private:
    unordered_map<string, int> products;

public:
    // Method to add a product to the inventory
    void addProduct(const string& name, int quantity) {
        products[name] += quantity;
        cout << "Product '" << name << "' added to the inventory with quantity " << quantity << "." << endl;
    }

    // Method to remove a product from the inventory
    void removeProduct(const string& name, int quantity) {
        if (products.find(name) != products.end()) {
            if (products[name] >= quantity) {
                products[name] -= quantity;
                cout << "Quantity of product '" << name << "' decreased by " << quantity << "." << endl;
            } else {
                cout << "Not enough quantity of product '" << name << "' in the inventory." << endl;
            }
        } else {
            cout << "Product '" << name << "' not found in the inventory." << endl;
        }
    }

    // Method to check for low inventory (quantity less than a specified threshold)
    void checkLowInventory(int threshold) {
        cout << "Products with low inventory:" << endl;
        for (const auto& pair : products) {
            if (pair.second < threshold) {
                cout << "- " << pair.first << ": " << pair.second << endl;
            }
        }
    }
};

int main() {
    Inventory inventory;

    char choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Add a product to the inventory\n";
        cout << "2. Remove a product from the inventory\n";
        cout << "3. Check low inventory\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case '1': {
                string name;
                int quantity;
                cout << "Enter the name of the product: ";
                getline(cin, name);
                cout << "Enter the quantity to add: ";
                cin >> quantity;
                inventory.addProduct(name, quantity);
                break;
            }
            case '2': {
                string name;
                int quantity;
                cout << "Enter the name of the product to remove: ";
                getline(cin, name);
                cout << "Enter the quantity to remove: ";
                cin >> quantity;
                inventory.removeProduct(name, quantity);
                break;
            }
            case '3': {
                int threshold;
                cout << "Enter the threshold for low inventory: ";
                cin >> threshold;
                inventory.checkLowInventory(threshold);
                break;
            }
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}

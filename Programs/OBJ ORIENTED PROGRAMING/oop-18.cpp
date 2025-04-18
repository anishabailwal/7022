#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Restaurant {
private:
    unordered_map<string, double> menu; // map<item, price>
    unordered_map<string, int> ratings; // map<item, rating>
public:
    // Constructor to add predefined items to the menu
    Restaurant() {
        addItem("Pizza", 12.99);
        addItem("Burger", 8.99);
        addItem("Pasta", 10.99);
    }

    // Method to add an item to the menu
    void addItem(string item, double price) {
        menu[item] = price;
    }

    // Method to remove an item from the menu
    void removeItem(string item) {
        menu.erase(item);
        ratings.erase(item); // Remove ratings for the item as well
    }

    // Method to rate an item
    void rateItem(string item, int rating) {
        if (ratings.find(item) == ratings.end()) {
            ratings[item] = rating; // If item not rated before
        } else {
            // Update average rating
            ratings[item] = (ratings[item] + rating) / 2;
        }
    }

    // Method to calculate average rating
    double calculateAverageRating() {
        if (ratings.empty()) return 0.0;
        double total = 0.0;
        for (const auto& entry : ratings) {
            total += entry.second;
        }
        return total / ratings.size();
    }

    // Method to display menu
    void displayMenu() {
        cout << "Menu:" << endl;
        for (const auto& entry : menu) {
            cout << entry.first << ": $" << entry.second << endl;
        }
    }
};

int main() {
    Restaurant restaurant;

    while (true) {
        cout << "\n1. Add item\n2. Remove item\n3. Display menu\n4. Exit\nEnter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string item;
                double price;
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter price: $";
                cin >> price;
                restaurant.addItem(item, price);
                cout << "Item added successfully!" << endl;
                break;
            }
            case 2: {
                string item;
                cout << "Enter item name to remove: ";
                cin >> item;
                restaurant.removeItem(item);
                cout << "Item removed successfully!" << endl;
                break;
            }
            case 3: {
                restaurant.displayMenu();
                cout << "Average rating: " << restaurant.calculateAverageRating() << endl;
                break;
            }
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

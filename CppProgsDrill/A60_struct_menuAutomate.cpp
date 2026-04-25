#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the struct for menu items
struct menuItemType {
    string menuItem;
    double menuPrice;
};

// Function to load the data into the array menuList
void getData(menuItemType menuList[], int size) {
    // Define the menu items
    menuList[0] = {"plain egg\t", 1.45};
    menuList[1] = {"bacon and egg", 2.45};
    menuList[2] = {"muffin\t", 0.99};
    menuList[3] = {"french toast\t", 1.99};
    menuList[4] = {"fruit basket\t", 2.49};
    menuList[5] = {"cereal\t", 0.69};
    menuList[6] = {"coffee\t", 0.50};
    menuList[7] = {"tea\t\t", 0.75};
}

// Function to show the menu
void showMenu(menuItemType menuList[], int size) {
    cout << "Welcome to Johnny's Restaurant\n";
    cout << "Menu:\n";
    // Loop to print the menu items
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << menuList[i].menuItem << "\t$" << fixed << setprecision(2) << menuList[i].menuPrice << endl;
    }
}

// Function to calculate and print the check
void printCheck(menuItemType menuList[], int selectedItems[], int itemCount) {
    double total = 0.0;
    cout << "\nYour order:\n";
    // Loop to print the selected items
    for (int i = 0; i < itemCount; ++i) {
        int index = selectedItems[i];
        cout << left << setw(1) << menuList[index].menuItem << right << setw(20) << "\t$" << menuList[index].menuPrice << endl;
        total += menuList[index].menuPrice;
    }
    // Print the tax, and amount due
    double tax = total * 0.05;
    double amountDue = total + tax;
    cout << left << setw(20) << "Tax" << right << setw(20) << "\t$" << tax << endl;
    cout << left << setw(20) << "Amount Due" << right << setw(20) << "\t$" << amountDue << endl;
}
// Main function
int main() {
    // Define the menu
    int menuSize = 8;
    menuItemType menuList[menuSize];
    getData(menuList, menuSize);
    // Define the variables
    int choice;
    int selectedItems[menuSize];
    int itemCount = 0;
    // Loop to get the order
    while (true) {
        showMenu(menuList, menuSize);
        cout << "Enter the number of the item you want to order (0 to finish): ";
        cin >> choice;
        if (choice == 0) break;
        if (choice < 1 || choice > menuSize) {
            cout << "Invalid choice. Please try again." << endl;
        } else {
            selectedItems[itemCount++] = choice - 1;
        }
    }
    // Print the check
    printCheck(menuList, selectedItems, itemCount);

    return 0;
}


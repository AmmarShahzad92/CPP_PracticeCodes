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
    menuList[0] = {"plain egg", 1.45};
    menuList[1] = {"bacon and egg", 2.45};
    menuList[2] = {"muffin", 0.99};
    menuList[3] = {"french toast", 1.99};
    menuList[4] = {"fruit basket", 2.49};
    menuList[5] = {"cereal", 0.69};
    menuList[6] = {"coffee", 0.50};
    menuList[7] = {"tea", 0.75};
}

// Function to show the menu
void showMenu(menuItemType menuList[], int size) {
    cout << "Welcome to Johnny's Restaurant\n";
    cout << "Menu:\n";
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << menuList[i].menuItem << "\t$" << fixed << setprecision(2) << menuList[i].menuPrice << endl;
    }
}

// Function to calculate and print the check
void printCheck(menuItemType menuList[], int selectedItems[], int itemCount) {
    double total = 0.0;
    cout << "\nYour order:\n";
    for (int i = 0; i < itemCount; ++i) {
        int index = selectedItems[i];
        cout << menuList[index].menuItem << "\t$" << fixed << setprecision(2) << menuList[index].menuPrice << endl;
        total += menuList[index].menuPrice;
    }
    double tax = total * 0.05;
    double amountDue = total + tax;
    cout << "Tax\t\t$" << fixed << setprecision(2) << tax << endl;
    cout << "Amount due\t$" << fixed << setprecision(2) << amountDue << endl;
}

int main() {
    const int menuSize = 8;
    menuItemType menuList[menuSize];
    getData(menuList, menuSize);

    int choice;
    int selectedItems[menuSize];
    int itemCount = 0;

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

    printCheck(menuList, selectedItems, itemCount);

    return 0;
}


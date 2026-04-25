#include <iostream>
using namespace std;

int main() {
    // Declaring n Initializing variables
    double side1=0, side2=0, side3=0;
    // Taking input for variables
    cout << "Enter the length of three sides of the triangle: " << endl;
    cout << "side 1 : ";
    cin >> side1;
    cout << "side 2 : ";
    cin >> side2;
    cout << "side 3 : ";
    cin >> side3;

    // Check if it's a triangle or not
    if ((side1<(side2+side3)) && (side2<(side1+side3)) && (side3<(side1+side2))) {
        //Check if it is a right angled triangle or not
        if ((side1 * side1) == (side2 * side2) + (side3 * side3) ||
            (side2 * side2) == (side1 * side1) + (side3 * side3) ||
            (side3 * side3) == (side1 * side1) + (side2 * side2)) {
            cout << "It is a right-angled triangle." << endl;
        }
        else {
            cout << "It is not a right-angled triangle." << endl;
        }

    }
    else {
        cout << "It is not a triangle." << endl;
    }

    return 0;
}

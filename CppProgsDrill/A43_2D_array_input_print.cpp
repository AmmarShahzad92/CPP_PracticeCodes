#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the row and column size for array: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter " << rows * cols << " array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The array elements with its index are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }

}


#include <iostream>
using namespace std;

// Function prototype
void subarray2(const int x[][100], int y[][100], int max_rows, int max_cols, int max_rows2, int max_cols2);

int main() {
    int max_rows, max_cols;
    cout << "Enter the number of rows and columns for array x: ";
    cin >> max_rows >> max_cols;

    int x[100][100];
    cout << "Enter the elements of array x:" << endl;
    for (int i = 0; i < max_rows; ++i) {
        for (int j = 0; j < max_cols; ++j) {
            cin >> x[i][j];
        }
    }

    int max_rows2, max_cols2;
    cout << "Enter the number of rows and columns for array y: ";
    cin >> max_rows2 >> max_cols2;

    int y[100][100];

    // Call the subarray2 function
    subarray2(x, y, max_rows, max_cols, max_rows2, max_cols2);

    return 0;
}

// Definition of the subarray2 function
void subarray2(const int x[][max_cols], int y[][max_cols], int max_rows, int max_cols, int max_rows2, int max_cols2) {
    if (max_rows2 > max_rows || max_cols2 > max_cols) {
        cout << "Error: Subarray size exceeds the size of array x!" << endl;
        return;
    }

    // Copy the elements of subarray from x to y
    for (int i = 0; i < max_rows2; ++i) {
        for (int j = 0; j < max_cols2; ++j) {
            y[i][j] = x[i][j];
        }
    }

    // Display array y
    cout << "Array y:" << endl;
    for (int i = 0; i < max_rows2; ++i) {
        for (int j = 0; j < max_cols2; ++j) {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }
}

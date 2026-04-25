#include <iostream>
using namespace std;

int max_cols, max_rows, max_cols2;

int y[max_rows][max_cols]; // Array to store the result of Copy function
int z[max_rows][max_cols2]; // Array to store the result of Subarray2 function

void Copy(const int x[][max_cols], int y[][max_cols], int max_rows) {


    cout << "Enter " << max_rows * max_cols << " array elements:" << endl;
    for (int i = 0; i < max_rows; i++) {
        for (int j = 0; j < max_cols; j++) {
            cin >> x[i][j];
        }
    }

    cout << "The array x is:" << endl;
    for (int i = 0; i < max_rows; i++) {
        for (int j = 0; j < max_cols; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }



    for (int i = 0; i < max_rows; ++i) {
        for (int j = 0; j < max_cols; ++j) {
            y[i][j] = x[i][j];
        }
    }

    cout << "The array y is:" << endl;
    for (int i = 0; i < max_rows; i++) {
        for (int j = 0; j < max_cols; j++) {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }

}

// Definition of the Subarray2 function
void Subarray2(const int x[][max_cols], int y[][max_cols2], int MAx_ROW1, int MAx_ROW2) {
    for (int i = 0; i < MAx_ROW2; ++i) {
        for (int j = 0; j < MAx_COL2; ++j) {
            y[i][j] = x[i][j];
        }
    }

int main() {
    int max_rows, max_cols;

    cout << "Enter the row and column size for array: ";
    cin >> max_rows >> max_cols;

    int x[max_rows][max_cols];

    // Call the Copy function
    cout << "After calling the Copy function:" << endl;

    Copy(x, y, max_rows);

    // Call the Subarray2 function
    cout << "\nAfter calling the Subarray2 function:" << endl;
    Subarray2(x, z, max_rows, 2);

    return 0;
}

}


#include<iostream>
using namespace std;
const int MAX_ROW1 = 4;
const int MAX_COL1= 7;
const int MAX_ROW2 = 3;
const int MAX_COL2 = 3;
void Subarray2(const int X[][MAX_COL1], int Y[][MAX_COL2], int MAX_ROW1,int MAX_ROW2) {
    for (int i = 0; i < MAX_ROW2; i++) {
        for (int j = 0; j < MAX_COL2; j++) {
            Y[i][j] = X[i][j];
        }
    }
}
int main() {
    int X[MAX_ROW1][MAX_COL1] = { {5, 4, 3, 2, 1,6,7}, { 9,8,7,6,5,4,3 }, { 2,4,6,8,10,12,14 },{1,3,5,7,9,11,13} };
    int Y[MAX_ROW2][MAX_COL2];
    cout << "Values of array X :" << endl;
    for (int i = 0; i < MAX_ROW1; i++) {
        for (int j = 0; j < MAX_COL1; j++) {
            cout << X[i][j] << " ";
        }
    }

    cout << "\nSub array of X with dimension 3 X 3:" << endl;
    Subarray2(X, Y, MAX_ROW1,MAX_ROW2);
    for (int k = 0; k < MAX_ROW2; k++) {
        for (int l = 0; l < MAX_COL2; l++) {
            cout << Y[k][l] << " ";
        }
    }
    return 0;
}

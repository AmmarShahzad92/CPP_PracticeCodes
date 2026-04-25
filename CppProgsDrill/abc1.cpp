#include<iostream>
using namespace std;
const int MAX_ROW = 4;
const int MAX_COL = 7;
void Copy(const int X[][MAX_COL], int Y[][MAX_COL], int MAX_ROW) {
    for (int i = 0; i < MAX_ROW; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            Y[i][j] = X[i][j];
        }
    }
}
int main() {
    int X[MAX_ROW][MAX_COL] = { {1, 3, 5, 7, 9,11,13}, { 9,8,7,6,5,4,5 }, { 2,4,6,8,10,12,14 },{1,2,3,4,5,6,7 } };
    int Y[MAX_ROW][MAX_COL];
    cout << "Values of array X :" << endl;
    for (int i = 0; i < MAX_ROW; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            cout << X[i][j] << " ";
        }
    }
    cout << "\nValues of Array Y after copying from X:" << endl;
    Copy(X, Y, MAX_ROW);
    for (int k = 0; k < MAX_ROW; k++) {
        for (int l = 0; l < MAX_COL; l++) {
            cout << Y[k][l] << " ";
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int a[5] = {2,4,6,8,10};
    int b[5] = {1,3,5,7,9};
    cout << "Array A: " << endl << "a0 = " << a[0] << endl << "a1 = " << a[1] << endl << "a2 = " << a[2] << endl << "a3 = " << a[3] << endl << "a4 = " << a[4] << endl;
    cout << "Array B: " << endl << "b0 = " << b[0] << endl << "b1 = " << b[1] << endl << "b2 = " << b[2] << endl << "b3 = " << b[3] << endl << "b4 = " << b[4] << endl;
    char swapping;
    cout << "enter choice of swap = ";
    cin >> swapping;
    int j=4;
    if (swapping == 'a') {
        for (int i=0; i<5; i++) {
            a[i] = b[j];
            cout << "a" << i << " = " << a[i] << endl;
            j--;
        }
    }
    else if (swapping == 'b') {
        for (int i=0; i<5; i++) {
            b[i] = a[j];
            j--;
            cout << "b" << i << " = " << b[i] << endl;
        }
    }
    else {}
}

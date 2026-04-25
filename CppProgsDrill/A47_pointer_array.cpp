#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2,5,7,1,3};
    int *ptr;
    for (int i = 0; i < 5; i++) {
        cout << "array is : \n";
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int j = 4; j >= 0; j--) {
        int a = arr[j];
        ptr = a;
        cout << "array[" << j << "] = " << *ptr << "\t";
    }
}

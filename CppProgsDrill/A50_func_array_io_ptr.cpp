#include <iostream>
using namespace std;

void arrayinput(int n, int *arr) {
    cout << "enter " << n << " Elements for array :\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
}
void arrayoutput(int n, int *arr) {
    cout << "array elements are : \n";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << "\t";
    }
    cout << "\n";
}
int main() {
    int n;
    cout << "enter array length : ";
    cin >> n;
    int arr[n];
    arrayinput(n, arr);
    arrayoutput(n, arr);
}

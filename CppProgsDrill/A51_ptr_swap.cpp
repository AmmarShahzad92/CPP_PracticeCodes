#include <iostream>
using namespace std;
void swapp(int *n1, int *n2) {
    cout << "a = " << *n1 << "\t b = " << *n2 << endl;
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout << "a = " << *n1 << "\t b = " << *n2 << endl;
}
int main() {
    int a, b;
    cout << "enter values to swap : ";
    cin >> a >> b;
    swapp(&a, &b);
}

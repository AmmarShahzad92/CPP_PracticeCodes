#include <iostream>
using namespace std;

int add(int x, int y) {   //by value
    int z = x + y;
    cout << "sum = " << z << endl;
    return z;
}
int sub(int &p, int &q) {    // by reference
    int r = p - q;
    cout << "Difference = " << r << endl;
    return r;
}
int main() {
    int a, b;
    cout << "enter two values : ";
    cin >> a >> b;
    add(a, b);
    sub(a, b);
}

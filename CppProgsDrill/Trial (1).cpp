#include <iostream>
using namespace std;
int add(int &x, int &y) {
    x = x+20;
    y = y+10;
    int sum = x + y;
    cout << "sum = " << sum << endl;
}
int main() {
    int val1, val2;
    cout << "val 1 = ";
    cin >> val1;
    cout << "val 2 = ";
    cin >> val2;
    add(val1, val2);
    cout << val1 << " " << val2 << endl;
}

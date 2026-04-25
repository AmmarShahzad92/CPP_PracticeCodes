#include <iostream>
using namespace std;
int main() {
    int nmbr=0;
    cout << "Number Table Display" << endl;
    cout << "enter the number to show table : ";
    cin >> nmbr;
    for (int i=1;i<=10;i++) {
        cout << nmbr << " * " << i << " = " << nmbr*i << endl;
    }
}

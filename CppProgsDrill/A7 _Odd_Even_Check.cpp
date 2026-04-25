#include <iostream>
using namespace std;

int main() {
    cout << "Odd/Even Check" << endl;
    int nmbr;
    cout << "Enter a number to check= ";
    cin >> nmbr;
    if (nmbr%2==1) {
        cout << "Number is odd" << endl;
    }else if (nmbr==0) {
        cout << "Number is zero" << endl;
    } else{
        cout << "Number is even" << endl;
    }
}

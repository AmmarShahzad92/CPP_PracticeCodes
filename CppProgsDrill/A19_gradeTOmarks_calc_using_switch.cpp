#include <iostream>
using namespace std;
int main () {
    char grade;
    cout << "Enter Grade (A,B,C,D,E) : ";
    cin >> grade;
    switch (grade) {
    case 'A' :
        cout << "90%-100% Marks";
        break;
    case 'B' :
        cout << "80%-89% Marks";
        break;
    case 'C' :
        cout << "70%-79% Marks";
        break;
    case 'D' :
        cout << "60%-69% Marks";
        break;
    case 'E' :
        cout << "50%-59% Marks";
        break;
    case 'F' :
        cout << "Failed ! marks<50%";
        break;
    default :
        cout << "Invalid Grade";
    }
}

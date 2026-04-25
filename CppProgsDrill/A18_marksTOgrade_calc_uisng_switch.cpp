#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks = ";
    cin >> marks;
    switch (marks) {
        case 90 ... 100:
            if (marks>=90 && marks<=95) {
                cout << "Grade : A-";
            } else {
                cout << "Grade : A+";
            }
            break;
        case 75 ... 89:
            if (marks>=75 && marks<=80) {
                cout << "Grade : B-";
            } else {
                cout << "Grade : B+";
            }
            break;
        case 60 ... 74:
            if (marks>=60 && marks<=67) {
                cout << "Grade : C-";
            } else {
                cout << "Grade : C+";
            }
            break;
        case 50 ... 59:
            if (marks>=50 && marks<=55) {
                cout << "Grade : D-";
            } else {
                cout << "Grade : D+";
            }
            break;
        default:
            cout << "Grade : F";
    }
    return 0;
}

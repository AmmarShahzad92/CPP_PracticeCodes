#include <iostream>
using namespace std;
int main() {
    //lab 5 question (a)
    int nmbr=1;
    while (nmbr<=100) {
        cout << nmbr << " ";
        nmbr++;
    }
    cout << "\n" << endl;
    for (nmbr=1;nmbr<=100;nmbr++) {
        cout << nmbr << " ";
    }
    cout << "\n" << endl;


    //lab 5 question (b)
    nmbr=100;
    while (nmbr>=1) {
        cout << nmbr << " ";
        nmbr--;
    }
    cout << "\n" << endl;
    for (nmbr=100;nmbr>=1;nmbr--) {
        cout << nmbr << " ";
    }
    cout << "\n" << endl;


    //lab 5 question (c)
    nmbr=20;
    while (nmbr>=2) {
        cout << nmbr << " ";
        nmbr=nmbr-2;
    }
    cout << "\n" << endl;
    for (nmbr=20;nmbr>=2;nmbr-=2) {
        cout << nmbr << " ";
    }
    cout << "\n" << endl;


    //lab 5 question (d)
    nmbr=2;
    while (nmbr<=20) {
        cout << nmbr << " ";
        nmbr=nmbr+3;
    }
    cout << "\n" << endl;
    for (nmbr=2;nmbr<=20;nmbr+=3) {
        cout << nmbr << " ";
    }
    cout << "\n" << endl;


    //lab 5 question (e)
    nmbr=99;
    while (nmbr>=0) {
        cout << nmbr << " ";
        nmbr=nmbr-11;
    }
    cout << "\n" << endl;
    for (nmbr=99;nmbr>=0;nmbr-=11) {
        cout << nmbr << " ";
    }
    cout << "\n" << endl;
}

#include <iostream>
using namespace std;

int main() {
    cout << "Quadratic Coordinates Check" << endl;
    float a,b,c,disc;
    cout << "Enter 3 values for quadratic coordinates"<<endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    disc=(b*b)-(4*a*c);
    if (disc>=0) {
        cout << "Coordinates are Real"<<endl;
    } else{
        cout << "Coordinates are Imaginary"<<endl;
    }
}

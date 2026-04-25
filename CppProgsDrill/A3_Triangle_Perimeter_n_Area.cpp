#include <iostream>
using namespace std;
int main() {
    cout << "Triangle Perimeter n Area" << endl;
    double a,b,c,area,perimeter;
    cout << "Enter base = ";
    cin >> a;
    cout << "Enter height = ";
    cin >> b;
    cout << "Enter Third side = ";
    cin >> c;
    area=0.5*a*b;
    perimeter=a+b+c;
    cout << "Area of triangle = " << area << endl;
    cout << "Perimeter of triangle = " << perimeter << endl;
}

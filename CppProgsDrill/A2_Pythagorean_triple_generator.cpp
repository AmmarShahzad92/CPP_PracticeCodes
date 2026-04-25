#include <iostream>
using namespace std;
int main() {
    double m,n,a,b,c;
    cout << "Pythagorean triple generator " << endl;
    cout << "Enter Value for m = ";
    cin >> m;
    cout << "Enter Value for n = ";
    cin >> n;
    a=(m*m)-(n*n);
    b=2*m*n;
    c=(m*m)+(n*n);
    cout << "Side 1 = " << a << endl;
    cout << "Side 2 = " << b << endl;
    cout << "Side 3 = " << c << endl;
}

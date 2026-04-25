#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int number=0;
    double value=0, sum=0;
    cout << "Find the sum of series 1 + 1/2^2 + 1/3^3 +...+ 1/n^n:" << endl;
    cout << "\n";
    cout << "Input the value for nth values: ";
    cin >> number;
    for (int i=1; i<=number; i++) {
        value = 1/pow(i, 2);
        cout << "1/" << i << "^" << i << " = " << value << endl;
        sum += value;
    }
    cout << "The sum of the above series is: " << sum << endl;
    return 0;
}


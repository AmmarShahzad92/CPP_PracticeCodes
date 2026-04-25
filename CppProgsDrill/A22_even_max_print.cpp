#include <iostream>
using namespace std;
int main() {
    int i,maxlim,sum=0;
    cout << "Enter max limit for printing even numbers : ";
    cin >> maxlim;
    for ( i=0; i<=maxlim; i++ ) {
        if (i%2==0) {
            cout << i << " ";
            sum+=i;
        }
    }
    cout << "\n";
    cout << "Sum of all even numbers up to " << maxlim << " is " << sum;
}

#include <iostream>
using namespace std;
int main() {
    int n=0;
    long factorial=1;
    cout << "Enter number for factorial : ";
    cin >> n;
    if (n<0) {
        cout << "Error! Negative number." << endl;
    }
    else {
        for (int i=1;i<=n;i++) {
            factorial*=i;
        }
        cout << "factorial of " << n << " is " << factorial << endl;
    }
}

#include <iostream>
using namespace std;

int main() {
    int n=0, sum = 0;
    while (!(n>0)) {
        cout << "Enter a positive integer: ";
        cin >> n;
    }

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum of 1 to " << n << " is: " << sum << endl;

    if (sum == (n * (n + 1)) / 2) {
        cout << "The sum is equal to the formula value (n*(n+1))/2" << endl;
    } else if (sum > ((n * (n + 1)) / 2)) {
        cout << "The sum is greater than the formula value (n*(n+1))/2" << endl;
    }
    else {
        cout << "The sum is less than the formula value (n*(n+1))/2" << endl;
    }

    return 0;
}

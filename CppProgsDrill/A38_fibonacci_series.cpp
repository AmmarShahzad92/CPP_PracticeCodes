#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int n) {
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> terms;

    printFibonacciSeries(terms);

    return 0;
}


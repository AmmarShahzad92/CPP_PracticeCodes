#include <iostream>
using namespace std;
int add(int x, int y) {
    int sum = x+y;
    cout << "Sum of given values is " << sum << endl;
}
int subtract(int x, int y) {
    int diff = x-y;
    cout << "Difference of given values is " << diff << endl;
}
int multiply(int x, int y) {
    int product = x*y;
    cout << "Product of given values is " << product << endl;
}
double divide(double x, double y) {
    double quotient = x/y;
    cout << "Quotient of given values is " << quotient << endl;
}
long factorial(long x) {
    long fact = 1;
    for (int i=1; i<=x; i++) {
        fact *= i;
    }
    cout << "Factorial of given number is " << fact << endl;
}
int mod(int x, int y) {
    int rem = x%y;
    cout << "Modulus of the given values is " << rem << endl;
}
int prime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}
int main() {
    int choice, a, b;
    cout << "1-add, 2-subtract, 3-multiply, 4-divide, 5-factorial, 6-modulus, 7-prime check" << endl;
    cout << "enter choice : ";

    cin >> choice;
    switch (choice) {
    case 1:
        cout << "value 1 = ";
        cin >> a;
        cout << "value 2 = ";
        cin >> b;
        add(a,b);
        break;
    case 2:
        cout << "value 1 = ";
        cin >> a;
        cout << "value 2 = ";
        cin >> b;
        subtract(a,b);
        break;
    case 3:
        cout << "value 1 = ";
        cin >> a;
        cout << "value 2 = ";
        cin >> b;
        multiply(a,b);
        break;
    case 4:
        cout << "value 1 = ";
        cin >> a;
        cout << "value 2 = ";
        cin >> b;
        divide(a,b);
        break;
    case 5:
        cout << "value 1 = ";
        cin >> a;
        factorial(a);
        break;
    case 6:
        cout <<"value 1 = ";
        cin >> a;
        cout << "value 2 = ";
        cin >> b;
        mod(a,b);
        break;
    case 7:
        cout <<"value 1 = ";
        cin >> a;
        if (prime(a)) {
            cout << a << " is a prime number.\n";
        }
        else {
            cout <<  a << " is not a prime number.\n";
        }
        break;
    }
    return 0;
}

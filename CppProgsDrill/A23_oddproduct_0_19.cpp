#include <iostream>
using namespace std;
int main() {
    int i,product=1;
    for (i=1;i<=19;i+=2) {
        product*=i;
        cout << "Product of odd integers from 1-19 is " << product <<endl;
    }
}

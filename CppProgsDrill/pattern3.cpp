#include <iostream>
using namespace std;
int main() {
    for (int i=1; i<=5; i++) {
        int n=i;
        for (int j=1; j<=5; j++) {
            cout << n;
            n++;
            if (n>5) {
                n = n % 5;  // or n=1;
            }
        }
        cout << "\n";
    }


    return 0;
}

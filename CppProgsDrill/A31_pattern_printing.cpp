#include <iostream>
using namespace std;
int main() {
    cout << "Pattern 3:" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 5 - i; j > 0; --j) {
            cout << " ";

        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

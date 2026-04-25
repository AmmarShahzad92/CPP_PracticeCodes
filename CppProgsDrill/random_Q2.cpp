#include <iostream>
#include <cstdlib> //library for rand and srand
#include <ctime>
using namespace std;

int getRandom(int lower, int upper) {
    return rand() % (upper - lower + 1) + lower;
}

int main() {
    srand(time(0));

    int num1 = getRandom(1, 2);
    int num2 = getRandom(1, 100);
    int num3 = getRandom(0, 9);
    int num4 = getRandom(1000, 1112);
    int num5 = getRandom(-1, 1);
    int num6 = getRandom(-3, 11);

    cout << "Random numbers generated:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;
    cout << "num5: " << num5 << endl;
    cout << "num6: " << num6 << endl;

    return 0;
}

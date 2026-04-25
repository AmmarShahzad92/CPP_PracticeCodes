#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "a) " << static_cast<char>(toupper('b')) << endl;
    cout << "b) " << static_cast<char>(toupper('7')) << endl;
    cout << "c) " << static_cast<char>(toupper('K')) << endl;
    cout << "d) " << static_cast<char>(toupper('*')) << endl;
    cout << "e) " << static_cast<char>(toupper('D')) << endl;
    cout << "f) " << static_cast<char>(toupper('B')) << endl;
    cout << "g) " << static_cast<char>(toupper('h')) << endl;
    cout << "h) " << static_cast<char>(toupper('$')) << endl;
    return 0;
}

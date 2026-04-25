#include <iostream>
using namespace std;
// Encrypted Caeser Cipher
string ecc( string msg, int shift) {
    string encrypted = "";

    for (int i = 0; i < msg.length(); ++i) {
        char ch = msg[i];
        if (isupper(ch)) {
            char encrpt_chr = 'A' + (ch - 'A' + shift) % 26;
            encrypted += encrpt_chr;
        } else {
            encrypted += ch;
        }
    }

    return encrypted;
}

int main() {
    string message;
    int shiftval;

    cout << "Enter a string: ";
    getline(cin, message);

    cout << "Enter the shift value: ";
    cin >> shiftval;

    cout << "Output: " << ecc(message, shiftval) << endl;

    return 0;
}


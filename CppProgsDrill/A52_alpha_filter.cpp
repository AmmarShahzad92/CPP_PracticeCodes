#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string str;
    bool check;
    cout << "Enter a string to check : ";
    getline(cin,str);
    cout << "the string with only alphabets is :\n";
    for (int i = 0; i < str.length(); i++) {
        check = isalpha(str[i]);
        if (check) {
            cout << str[i];
        }
    }

}

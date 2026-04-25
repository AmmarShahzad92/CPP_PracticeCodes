#include <iostream>
using namespace std;

/*int main() {
    char arr[] = {"Concepts of Programming Fundamentals"};
    char *ptr = arr;
    char character;
    cout << "Enter any character : ";
    cin >> character;
    bool flag;
    while (*ptr != '\0') {
        if (*ptr == character) {
                flag = true;
        }
        else {
                flag = false;
        }
        ptr++;

    }
    if (flag == true) {
        cout << "Character is present in the string.";
    }
    else if (flag == false) {
        cout << "Character not present.";
    }
    else{}
} */


int main() {
    char arr[] = {"Concepts of Programming Fundamentals"};
    char *ptr = arr;
    char character;
    cout << "Enter any character : ";
    cin >> character;
    int i = 0;
    while (*ptr != '\0') {
        if (*ptr == character) {
            cout << "present";
            break;
        }
        ptr++;
    }
    if (*ptr == '\0') {
        cout << "absent";
    }
}


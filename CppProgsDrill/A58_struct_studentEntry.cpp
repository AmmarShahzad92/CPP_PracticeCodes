#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct student {
    int id;
    string name;
};

int main() {
    int arrsize;
    cout << "enter number of students : ";
    cin >> arrsize;
    student arr[arrsize];
    cout << "enter id and names for " << arrsize << "students: \n";
    for (int i = 0; i < arrsize; i++) {
        cout << "Student: " << i+1 << " ID: ";
        cin >> arr[i].id;
        cout << "Student: " << i+1 << " Name: ";
        cin >> arr[i].name;
    }
    for (int i = 0; i < arrsize; i++) {
        cout << "Student: " << i+1 << endl;
        cout << " ID: " << arr[i].id << endl;
        cout << " Name: " << arr[i].name + to_string(i+1) << endl;
    }
}

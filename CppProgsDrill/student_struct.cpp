#include <iostream>
#include <cstring>
using namespace std;

struct student {
    int id;
    string name;
    int age;
    char gender;
};

void student_entry(student a[]) {
    int i =0;
    cout << "student: " << i+1 << endl;
    cout << "id : ";
    cin >> a[i].id;
    cout << "name : ";
    cin >> a[i].name;
    cout << "age : ";
    cin >> a[i].age;
    cout << "gender (m/f) : ";
    cin >> a[i].gender;
}

void student_display(student a[]) {
    cout << "\n student data display\n";
    for (int i = 0; i < sizeof(a); i++) {
        cout << "student: " << i+1 << endl;
        cout << "id : " << a[i].id << endl;
        cout << "name : " << a[i].name << endl;
        cout << "age : " << a[i].age << endl;
        cout << "gender : " << a[i].gender << endl;
        cout << "\n \n";
    }
}

int main() {
    student arr[5];
    int choice;
    cout << "MENU\n";
    cout << "0-exit \n";
    cout << "1-enter data\n";
    cout << "2-display data \n";
    cout << "enter choice : ";
    cin >> choice;
    while (choice == 0 || choice == 1 || choice == 2) {
        if (choice == 0) {
            break;
        }
        else if (choice == 1) {
            student_entry(arr);
            cout << "enter choice : ";
            cin >> choice;
        }
        else if (choice == 2) {
            student_display(arr);
            cout << "enter choice : ";
            cin >> choice;
        }
        else {
            cout << "invalid choice..! \n";
            do {
                cout << "enter choice again : ";
                cin >> choice;
            } while (choice != 0 && choice != 1 && choice != 2);
        }
    }
}

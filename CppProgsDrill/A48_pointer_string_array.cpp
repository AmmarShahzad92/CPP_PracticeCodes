#include <iostream>
using namespace std;

int main() {
    char arr1[10] = { "Ammar" };
    int arr2[11] = {0,3,2,1,4,9,4,4,2,9,6};
    char *ptr1 = arr1;
    int *ptr2 = arr2;
    char *name = "Ammar Shahzad";
    cout << "My info is : " << endl;
    cout << name <<endl;
    cout << endl << "first Name : ";

    for (int i = 0; i < 10; i++) {
        cout << *ptr1;
        ptr1++;
    }
    cout << endl << "number : ";
    for (int j = 0; j < 11; j++) {
        cout << *ptr2;
        ptr2++;
    }

}

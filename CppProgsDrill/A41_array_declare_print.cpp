#include <iostream>
using namespace std;

int main() {
    // Task 1: Declare an integer array of 10 elements
    int array1[10];

    // Task 2: Declare and initialize an integer array of 5 numbers
    int array2[] = {5, 4, 3, 4, 5};

    // Task 3: Declare and initialize an integer array of 5 numbers
    int array3[] = {5, -5};

    // Task 4: Declare and initialize an array of 3 elements
    float array4[] = {3.7, -1.2, 2.0};

    // Task 5: Declare and initialize an array of 100 elements with all values = 0
    int array5[100] = {0};

    // Task 6: Print the 2nd and 3rd elements of array2
    cout << "Elements 2 and 3 of array2: " << array2[1] << ", " << array2[2] << endl;

    // Task 7: Print the 1st and last elements of array3
    cout << "First and last elements of array3: " << array3[0] << ", " << array3[1] << endl;

    // Task 8: Set the 1st and last elements value to 0 and 100 in array5
    array5[0] = 0;
    array5[99] = 100;

    // Task 9: Set the 1st and last elements value to 20 and 100 in array5
    array5[0] = 20;
    array5[99] = 100;

    // Task 10: Set all array elements to -1.0 in array4 using the index operator
    for (int i = 0; i < 3; ++i) {
        array4[i] = -1.0;
    }
}

#include <iostream>
using namespace std;

// Function to reverse the order of values in the array
void reverseArray(float arr[], int size) {
    // Iterate through the array elements up to the middle
    for (int i = 0; i < size / 2; ++i) {
        // Swap the elements at index i and (size - i - 1)
        float temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int size;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    //initializing float array of given size
    float arr[size];
    // Prompt the user to enter the elements of the array
    cout << "Enter " << size << " floating-point numbers for array elements: \n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Call the reverseArray function to reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

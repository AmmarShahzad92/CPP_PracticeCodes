#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[length];
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, length)) {
        cout << "The given array is a palindrome." << endl;
    } else {
        cout << "The given array is not a palindrome." << endl;
    }

    return 0;
}

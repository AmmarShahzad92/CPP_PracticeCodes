#include <iostream>
using namespace std;
int main() {
    int n=0, integer=0, evensum=0, oddsum=0;
    while (!(n>=2 && n<=10)) {
        cout << "Enter the valid number of integers you want to sum (i.e Range:2-10): ";
        cin >> n;
    }
    for (int i=1; i<=n; i++) {
        cout << "Enter value for integer #" << i << " : ";
        cin >> integer;
        if (integer%2==0) {
            evensum+=integer;
        }
        else {
            oddsum += integer;
        }
    }
    cout << "Sum of even integers is " << evensum << endl;
    cout << "Sum of odd integers is " << oddsum << endl;
}

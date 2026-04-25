#include <iostream>
using namespace std;
int main() {
    int num=0,sum=0;
    do {
        cout << "Enter number to sum : ";
        cin >> num;
        sum+=num;
    }
    while (num!=0);
    cout << "Sum = " << sum;
    return 0;
}

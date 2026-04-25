#include <iostream>
using namespace std;
//making function to calculate sum of range
//declared and initialized the int function
int sumofrange(int initialval, int finalval) {
    //initialized sum to 0
    int sum = 0;
    //operated with for loop iterate through range
    for (int i = initialval; i <= finalval; i++) {
        //used compound operator for sum
        sum += i;
    }
    //returned value of sum
    return sum;
}
//now write main() function
 int main() {
    //initialized variables
    int first, last;
    //take input from user for range start and stop values
    cout << "Enter the initial value for sum range: ";
    cin >> first;
    cout << "Enter the final value for sum range: ";
    cin >> last;
    //called sumofrange() function in cout statement to perform sum calculation
    cout << "sum of given range = " << sumofrange(first,last);
 }

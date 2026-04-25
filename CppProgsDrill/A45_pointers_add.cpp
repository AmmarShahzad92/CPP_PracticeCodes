#include <iostream>
using namespace std;

int main() {
    int a=12;
    int b=15;
    int *ptr1=&a;
    int *ptr2=&b;
    int c= *ptr1 + *ptr2;
    cout << c;

}

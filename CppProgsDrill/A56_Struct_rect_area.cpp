#include <iostream>
using namespace std;

struct rect {
    int length;
    int width;
};

int main() {
    rect rec;
    cout << "Enter Length of rectangle : ";
    cin >> rec.length;
    cout << "Enter Width of rectangle : ";
    cin >> rec.width;
    int area = rec.length * rec.width;
    cout << "Area of rectangle = " << area;
}

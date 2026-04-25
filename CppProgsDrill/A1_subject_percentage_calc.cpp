#include <iostream>
using namespace std;
int main() {
    cout << "Subject Percentage Calculator" << endl;
    double a,b,c,d,e,f,g,h,i,t;
    cout << "Enter Total Marks in FCP = ";
    cin >> a;
    cout << "Enter Total Marks in Math  = ";
    cin >> b;
    cout << "Enter Total Marks in EE = ";
    cin >> c;
    cout << "Enter Obtained Marks in FCP = ";
    cin >> d;
    cout << "Enter Obtained Marks in Math = ";
    cin >> e;
    cout << "Enter Obtained Marks in EE = ";
    cin >> f;
    g=d/a*100;
    h=e/b*100;
    i=f/c*100;
    t=(g+h+i)/3;
    cout << "Percentage in FCP = " << g << endl;
    cout << "Percentage in Math = " << h << endl;
    cout << "Percentage in EE = " << i << endl;
    cout << "Percentage in All Subjects = " << t << endl;
}

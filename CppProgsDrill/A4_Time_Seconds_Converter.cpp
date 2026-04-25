#include <iostream>
using namespace std;
int main() {
    cout << "Time Seconds Converter" << endl;
    double hrs,mins,secs,fhrs,fmins,total;
    cout << "Enter hours = ";
    cin >> hrs;
    cout << "Enter mins = ";
    cin >> mins;
    cout << "Enter secs = ";
    cin >> secs;
    fhrs=hrs*3600;
    fmins=mins*60;
    total=fhrs+fmins+secs;
    cout << "Final hours= " << fhrs << endl;
    cout << "Final minutes= " << fmins << endl;
    cout << "Final seconds = " << total << endl;
}

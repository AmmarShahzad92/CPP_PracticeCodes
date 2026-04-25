#include <iostream>
using namespace std;
int main() {
    cout << "Time format Converter" << endl;
    int hrs,mins,secs,esecs,rsecs1,rsecs2;
    cout << "Enter secs = ";
    cin >> esecs;
    hrs=esecs/3600;
    rsecs1=esecs%3600;
    mins=rsecs1/60;
    rsecs2=rsecs1%60;
    secs=rsecs2;
    cout << hrs << "hrs ";
    cout << mins << "mins ";
    cout << secs << "secs" << endl;
}

#include <iostream>
#include <cmath>
using namespace std;

struct TimeStruct_t {
    int hours;
    int mins;
    string period;
};

void display_time(TimeStruct_t myTime) {
    cout << "enter time please (hrs min per) :     ";
    cin >> myTime.hours >> myTime.mins >> myTime.period;
    while (myTime.period != "am" && myTime.period != "pm") {
        cout << "invalid period again..! please enter correct period (am/pm): ";
        cin >> myTime.period;

    }
    int overflow_mins, overflow_hours;
    if (myTime.mins >= 60) {
        overflow_hours = floor(myTime.mins / 60);
        myTime.mins %= 60;
        myTime.hours += overflow_hours;
    }
    if (myTime.hours > 12) {
        if (myTime.period == "am") {
            myTime.period == "pm";
        }
        else if (myTime.period == " pm") {
            myTime.period == "am";
        }
        else {}
        myTime.hours %= 12;
    }
    cout << "Time:   " << myTime.hours << ":" << myTime.mins << " " << myTime.period << endl;

}

int main() {
    TimeStruct_t time_struct;
    display_time(time_struct);
    return 0;
}

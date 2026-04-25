#include <iostream>
using namespace std;

int main() {
    //declaring variables
    double temperature=0;
    double sum = 0;
    int hotDays = 0, extremeHotDays = 0, pleasantDays = 0, coldDays = 0;

    // Input 7 temperature readings
    for (int i = 1; i <= 7; ++i) {
        cout << "Enter temperature for day " << i << " (0-50 Celsius): ";
        cin >> temperature;

        // Validate input
        while (temperature < 0 || temperature > 50) {
            cout << "Invalid temperature. Please enter a value between 0 and 50 Celsius: ";
            cin >> temperature;
        }

        sum += temperature; // Calculate sum for average

        // Categorize the days and calculating sum for for number of days
        if (temperature >= 40) {
            extremeHotDays++;
        } else if (temperature >= 30 && temperature <= 39) {
            hotDays++;
        } else if (temperature >= 15 && temperature <= 29) {
            pleasantDays++;
        } else {
            coldDays++;
        }
    }

    // Calculate average temperature
    double average = sum / 7;

    // Display results
    cout << "Extreme Hot Days (Temperature 40 and above): " << extremeHotDays << endl;
    cout << "Hot Days (Temperature 30-39): " << hotDays << endl;
    cout << "Pleasant Days (Temperature 15-29): " << pleasantDays << endl;
    cout << "Cold Days (Temperature 0-14): " << coldDays << endl;
    cout << "Average Temperature: " << average << " Celsius" << endl;

    return 0;
}




#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double distance, fuelRate, pricePerLiter;
    double totalHours, speed, fuelUsed, fuelCost;
    int hours, minutes;

    // Read the input
    cout << "Enter distance, hours, minutes, fuel rate and price per liter: ";

    cin >> distance >> hours >> minutes >> fuelRate >> pricePerLiter;

    // Calculate
    totalHours = hours + minutes / 60.0;

    speed = distance / totalHours;

    fuelUsed = (distance * fuelRate) / 100;

    fuelCost = fuelUsed * pricePerLiter;

    // Print the result
    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelConsumption, pricePerLiter;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (L per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}

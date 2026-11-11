#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelConsumption, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int travelhours, travelminutes;

    cout << "TRIP AND FUEL COST CALCULATOR" << endl;


    cout << "Enter distance travelled ( in km): ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes separated by space ): ";
    cin >> travelhours >> travelminutes;

    cout << "Enter fuel consumption (L per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (Birr): ";
    cin >> fuelPrice;

    totalTime = travelhours + (travelminutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "\n CALCULATED TRAVEL DETAILS" << endl;

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Consumed: " << fuelUsed << " liters" << endl; 
    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;

    return 0;
}
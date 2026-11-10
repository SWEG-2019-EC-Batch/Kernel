
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constants
    const int LIMIT = 50;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.0;

    // Variables
    int units;
    double energyCharge, serviceCharge, totalBill;

    // Read input
    cout << "Enter electricity units used: ";
    cin >> units;

    // Calculate energy charge
    energyCharge = (units <= LIMIT)
                 ? units * FIRST_RATE
                 : (LIMIT * FIRST_RATE) + (units - LIMIT) * EXTRA_RATE;

    // Calculate service charge
    serviceCharge = SERVICE_CHARGE;

    // Calculate total bill
    totalBill = energyCharge + serviceCharge;

    // Print results
    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energyCharge << endl;
    cout << "Service charge: " << serviceCharge << endl;
    cout << "Total bill: " << totalBill << endl;

    return 0;
}

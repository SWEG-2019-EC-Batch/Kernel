
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, serviceCharge = 10.00, total;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units > 50)
        ? (50 * 1.50 + (units - 50) * 2.00)
        : (units * 1.50);

    total = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << serviceCharge << " birr" << endl;
    cout << "Total Bill: " << total << " birr" << endl;

    return 0;
}

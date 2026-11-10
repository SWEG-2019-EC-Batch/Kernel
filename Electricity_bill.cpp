#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double FIRST_RATE = 1.50;
    const double SECOND_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;
    const int FIRST_LIMIT = 50;

    int units;
    double energyCharge, totalBill;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    energyCharge = (units <= FIRST_LIMIT)
                       ? (units * FIRST_RATE)
                       : ((FIRST_LIMIT * FIRST_RATE) +
                          ((units - FIRST_LIMIT) * SECOND_RATE));

    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << totalBill << " birr" << endl;

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SERVICE_CHARGE = 10;
    const double RATE = 1.5;
    const double EXCESS_RATE = 2;
    const int UNIT_LIMIT = 50;

    int electricityunits, excessunit ;
    double energyCharge, totalBill;


    cout << " ELECTRICITY BILL CALCULATOR" << endl;


    
    cout << "Enter electricity units used (kWh): ";
    cin >> electricityunits;

    excessunit = electricityunits > UNIT_LIMIT ? ( electricityunits - UNIT_LIMIT ):0;


    
    energyCharge = (electricityunits <= UNIT_LIMIT)
                   ? electricityunits * RATE
                   : (UNIT_LIMIT * RATE) + (excessunit * EXCESS_RATE);

    
    totalBill = energyCharge + SERVICE_CHARGE ;

    
    cout << "\n  BILL SUMMARY " << endl;

    cout << fixed << setprecision(2);

    cout << "For the consumption of " << electricityunits << " kWh:" << endl;
    cout << "Energy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " Birr" << endl;

    
    cout << "\n  Your total electricity bill is: "
     << totalBill << " Birr" << endl;
    

    return 0;
}
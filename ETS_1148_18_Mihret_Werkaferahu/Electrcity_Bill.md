I. Input/Output
 1. Input
       Electricity units
 2. Output
        Energy charge
        Service charge
        Total Electricity bill

II. Process(Operation)
    1.Declare variables to store electricity units and calculated amounts(energy charge, total Electricity bill and excess unit) 
    2.Define constants for service charge, rate, excess rate and unit limit
    3. Display prompts and read electricity units
    4. Check whether the units consumed are less than or equal to the unit limit.
    5. If the units are unit limit or less, multiply the units consumed by the rate.
    6. If the units are above unit limit:
          i. Multiply the first unit limit units by rate
          ii. Multiply the remaining units which is excess unit( electricityunits - UNIT_LIMIT ) by excess rate.
          iii. Add the two amounts.
    7. Add the service charge of 10 Birr to the calculated bill.
    8. Display the total electricity bill in birr to two decimal place
III. Design the program
//Variable declaration
    int electricityunits, excessunit ;
    double energyCharge, totalBill;
//Constant definition
    const int SERVICE_CHARGE = 10;
    const double RATE = 1.5;
    const double EXCESS_RATE = 2;
    const int UNIT_LIMIT = 50;
//Reading the input
    cout << "Enter electricity units used (kWh): ";
    cin >> electricityunits;
//Calculation
        i. excessunit = electricityunits > UNIT_LIMIT ? ( electricityunits - UNIT_LIMIT ):0;
        ii. energyCharge = (electricityunits <= UNIT_LIMIT)
                   ? electricityunits * RATE
                   : (UNIT_LIMIT * RATE) + (excessunit * EXCESS_RATE)
        iii. totalBill = energyCharge + SERVICE_CHARGE
//Printing the results
    cout << "For the consumption of " << electricityunits << " kWh:" << endl;
    cout << "Energy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " Birr" << endl;

    
    cout << "\n  Your total electricity bill is: "
     << totalBill << " Birr" << endl;
         


    





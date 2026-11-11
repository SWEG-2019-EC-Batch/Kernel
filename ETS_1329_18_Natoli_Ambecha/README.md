 TASK 1: STUDENT_COURSE_TOTAL
 
I. Input/Output

1. Input
   
   Assignment mark

   Midterm mark

   Final exam mark
   
2. Output

   Total course mark

   Pass or Fail

II. Process(Opration)

1. Declare variables to store the three marks and the total.
   
2. Define constants for the three weight percentage and the passing mark.

3. Read the three marks.

4. Calculate the total course mark.

5. Decide whether the student passed or failed using conditional operator.

6. Display the total and result with one decimal place.
   
   III. Design the program
   
// Variable declaration

 double assignment;
 
 double midterm;
 
 double finalMark;
 
 double total_course_mark;
 
 string result;

// Constant definition

const double ASSIGN_WEIGHT = 0.20;

const double MID_WEIGHT = 0.30;

const double FINAL_WEIGHT = 0.50;

const double PASS_MARK = 50.0;

// Reading the input

cout << "Enter assignment, midterm and final marks separated by space: ";

cin >> assignment >> midterm >> finalMark;

// Calculation

Total_course_mark=(assignment * ASSIGN_WEIGHT)+(midterm * MID_WEIGHT)+(Final *FINAL_WEIGHT)

result = (total >= PASS_MARK) ? "Pass" : "Fail";

// Printing the results

cout << fixed << setprecision(1);

cout << "Total mark: " << total << endl;

cout << "Result: " << result << endl;

TASK 2: ELECTRICITY_BILL

I. Input/Output

1. Input

Electricity units used(kWh)

2. Output

   Energy charge
   
   Service charge

   Total bill

II. Process ( Operation)

1. Declare varaiables to store electricity units and calculated amounts.
   
2. Define constants for the unit rates, limit and service charge.

3. Read the elecricity unit.

4. Calculate the energy charge depending on the number of units.

5. Add the fixed service charge.

6. Calculate the total bill.

7. Display all results with two decimal places.

 III. Design the program  

//Variable declaration

int unit;

double energyCharge;

double seviceCharge;

double totalBill;

// Constant definition

const int LIMIT = 50;

const double FIRST_RATE = 1.50;

const double EXTRA_RATE = 2.00;

const double SERVICE_CHARGE = 10.0;

// Reading the input

cout << "Enter electricity units used: ";

cin >> units;

// Calculation

energyCharge = (units <= LIMIT) ? units * FIRST_RATE : (LIMIT * FIRST_RATE) + (units - LIMIT) * EXTRA_RATE;

// Printing the results

cout << fixed << setprecision(2);

cout << "Energy charge: " << energyCharge << endl;

cout << "Service charge: " << serviceCharge << endl;

cout << "Total bill: " << totalBill << endl;

TASK 3: TRIP_SPEED_and_FUEL_COST

I. Input/Output

1. Input

   Distance (km)

   Travel time (hours)

   Travel time (minutes)

   Fuel consmption (liter per 100km)

   Price per liter (birr)

2. Output

   Average speed (km/h)

   Fuel used (liters)

   Fuel cost (birr)

II. Process (Operation)

1. Declare variables to store the inputs and results.

2. Read the five input values.

3. Convert the travel time into hours.

4. Caculate the average speed.

5. Calculate the fuel used.

6. Calcualte the fuel cost.

7. Dispaly all the results with two decimal places.

III. Design the program
   
//Variable and constant declaration

int hours,minutes

double distance, fuelRate, pricePerLiter, totalHours, speed, fuelUsed, fuelCost 

// Reading the input

cout << "Enter distance, travel time (hours), travel time(minutes) , fuel rate (liters per 100km) and price per liter separated by 
space: ";

cin >> distance >> hours >> minutes >> fuelRate >> pricePerLiter;

// Calculation

totalHours= hours + minutes/60;

averageSpeed = distance / totalHours;

fuelUsed= (distance * fuleRate) / 100;

fuelCost= fuelUsed * pricePerLiter;

// Printing the results

cout << fixed << setprecision(2);

cout << "Average speed: " << speed << " km/h" << endl;

cout << "Fuel used: " << fuelUsed << " liters" << endl;

cout << "Fuel cost: " << fuelCost << " birr" << endl;


